#pragma once

#include <vector>
#include <stdexcept>
namespace KGMRPC::Tools {
	class ByteStream {
	private:
		std::vector<uint8_t> buffer;
		size_t readPos;
	public:
		ByteStream() : readPos(0) {}
		void write(const void* data, size_t size);
		void read(void* outData, size_t size);
		template<typename T>
		void write(const T& value) {
			write(&value, sizeof(T));
		}
		template<typename T>
		T read() {
			T value{};
			read(&value, sizeof(T));
			return value;
		}
		template<typename T>
		void read(T& value) {
			read(&value, sizeof(T));
		}
		const std::vector<uint8_t>& getBuffer() const;
		const void* data() const;

		void clear();
		size_t size() const;
		void resetReadPos();
	};

	class ByteStreamView {
	private:
		void* buffer;
		size_t offset , len;
	public:
		ByteStreamView() : buffer(nullptr), offset(0), len(0) {}
		ByteStreamView(void* buffer, size_t len) : buffer(buffer), offset(0), len(len) {}

		void write(const void* data, size_t size);
		void read(void* outData, size_t size);
		template<typename T>
		void write(const T& value) {
			write(&value, sizeof(T));
		}
		template<typename T>
		void read(T& value) {
			read(&value, sizeof(T));
		}
		template<typename T>
		T read() {
			T value{};
			read(&value, sizeof(T));
			return value;
		}
		const void* getBuffer() const;
		void clear();
		size_t size() const;
		void resetOffset();
	};
}