#include "ByteStream.h"

void Injector::Tools::ByteStream::write(const void* data, size_t size)
{
	const uint8_t* byteData = static_cast<const uint8_t*>(data);
	buffer.insert(buffer.end(), byteData, byteData + size);
}

void Injector::Tools::ByteStream::read(void* outData, size_t size)
{
	if (readPos + size > buffer.size()) {
		throw std::out_of_range("Read exceeds buffer size");
	}
	std::memcpy(outData, buffer.data() + readPos, size);
	readPos += size;
}

const std::vector<uint8_t>& Injector::Tools::ByteStream::getBuffer() const
{
	return buffer;
}

const void* Injector::Tools::ByteStream::data() const
{
	return buffer.data();
}


void Injector::Tools::ByteStream::clear() {
	buffer.clear();
	readPos = 0;
}
size_t Injector::Tools::ByteStream::size() const {
	return buffer.size();
}
void Injector::Tools::ByteStream::resetReadPos() {
	readPos = 0;
}

void Injector::Tools::ByteStreamView::write(const void* data, size_t size)
{
	const uint8_t* byteData = static_cast<const uint8_t*>(data);
	if (offset + size <= this->len)
	{
		std::copy(byteData, byteData + size, static_cast<uint8_t*>(buffer) + offset);
		offset += size;
	}
}

void Injector::Tools::ByteStreamView::read(void* outData, size_t size)
{
	auto byteData = static_cast<uint8_t*>(outData);
	if (offset + size <= this->len)
	{
		auto src = static_cast<uint8_t*>(buffer) + offset;
		std::copy(src, src + size, byteData);
		offset += size;
	}
}

const void* Injector::Tools::ByteStreamView::getBuffer() const
{
	return buffer;
}

void Injector::Tools::ByteStreamView::clear()
{
	offset = 0;
	memset(buffer, 0, len);
}

size_t Injector::Tools::ByteStreamView::size() const
{
	return len;
}

void Injector::Tools::ByteStreamView::resetOffset()
{
	offset = 0;
}
