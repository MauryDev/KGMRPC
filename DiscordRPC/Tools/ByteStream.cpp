#include "ByteStream.h"

void KGMRPC::Tools::ByteStream::write(const void* data, size_t size)
{
	const uint8_t* byteData = static_cast<const uint8_t*>(data);
	buffer.insert(buffer.end(), byteData, byteData + size);
}

void KGMRPC::Tools::ByteStream::read(void* outData, size_t size)
{
	if (readPos + size > buffer.size()) {
		throw std::out_of_range("Read exceeds buffer size");
	}
	std::memcpy(outData, buffer.data() + readPos, size);
	readPos += size;
}

const std::vector<uint8_t>& KGMRPC::Tools::ByteStream::getBuffer() const
{
	return buffer;
}

const void* KGMRPC::Tools::ByteStream::data() const
{
	return buffer.data();
}


void KGMRPC::Tools::ByteStream::clear() {
	buffer.clear();
	readPos = 0;
}
size_t KGMRPC::Tools::ByteStream::size() const {
	return buffer.size();
}
void KGMRPC::Tools::ByteStream::resetReadPos() {
	readPos = 0;
}

void KGMRPC::Tools::ByteStreamView::write(const void* data, size_t size)
{
	const uint8_t* byteData = static_cast<const uint8_t*>(data);
	if (offset + size <= this->len)
	{
		std::copy(byteData, byteData + size, static_cast<uint8_t*>(buffer) + offset);
		offset += size;
	}
}

void KGMRPC::Tools::ByteStreamView::read(void* outData, size_t size)
{
	auto byteData = static_cast<uint8_t*>(outData);
	if (offset + size <= this->len)
	{
		auto src = static_cast<uint8_t*>(buffer) + offset;
		std::copy(src, src + size, byteData);
		offset += size;
	}
}

const void* KGMRPC::Tools::ByteStreamView::getBuffer() const
{
	return buffer;
}

void KGMRPC::Tools::ByteStreamView::clear()
{
	offset = 0;
	memset(buffer, 0, len);
}

size_t KGMRPC::Tools::ByteStreamView::size() const
{
	return len;
}

void KGMRPC::Tools::ByteStreamView::resetOffset()
{
	offset = 0;
}
