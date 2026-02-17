#pragma once
#include <memory>
#include <vector>
#include <functional>

namespace KGMRPC::Tools {

	using UpdateFuncDel = std::function<void(void*)>;
	class MainUpdate
	{
	private:
		std::vector<UpdateFuncDel> UpdateFuncs;
	public:
		static void Install();
		void AddUpdate(UpdateFuncDel del);
	};

}

