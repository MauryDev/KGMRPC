#pragma once
#include <functional>
#include <vector>
#include <mutex>
#include <memory>
namespace KGMRPC::Tools
{
	namespace QuittingService
	{
		inline std::shared_ptr<std::mutex> mutexOnQuitting;
		inline std::vector<std::function<void()>> onQuitting;
		using QuittingFn = void(*)(void* obj);
		inline QuittingFn funcOriginal;
		void Install();
		void Run(void* obj);
		void AddOnQuitting(const std::function<void()>& fn);
	};
}