#pragma once
#include <stack>
#include <mutex>
namespace KGMRPC::Tools
{
	template<typename T>
	struct Message
	{
		std::mutex mutex;
		std::stack<T> messages;
		void postMessage(const T& message)
		{
			std::lock_guard<std::mutex> lock(mutex);
			messages.push(message);
		}
		void getMessage(T& message)
		{
			std::lock_guard<std::mutex> lock(mutex);
			if (!messages.empty())
			{
				message = messages.top();
				messages.pop();
			}
		}
		void peekMessage(T& message) const
		{
			std::lock_guard<std::mutex> lock(mutex);
			if (!messages.empty())
			{
				message = messages.top();
			}
		}
		bool hasMessage() const
		{
			std::lock_guard<std::mutex> lock(mutex);
			return !messages.empty();
		}
		void clearMessages()
		{
			std::lock_guard<std::mutex> lock(mutex);
			while (!messages.empty())
			{
				messages.pop();
			}
		}
		bool isEmpty() const
		{
			std::lock_guard<std::mutex> lock(mutex);
			return messages.empty();
		}
		size_t size() const
		{
			std::lock_guard<std::mutex> lock(mutex);
			return messages.size();
		}
		bool tryGetMessage(T& message)
		{
			std::lock_guard<std::mutex> lock(mutex);
			if (!messages.empty())
			{
				message = messages.top();
				messages.pop();
				return true;
			}
			return false;
		}
		bool tryPeekMessage(T& message) const
		{
			std::lock_guard<std::mutex> lock(mutex);
			if (!messages.empty())
			{
				message = messages.top();
				return true;
			}
			return false;
		}
		bool tryClearMessages()
		{
			std::lock_guard<std::mutex> lock(mutex);
			if (!messages.empty())
			{
				while (!messages.empty())
				{
					messages.pop();
				}
				return true;
			}
			return false;
		}

	};
}

