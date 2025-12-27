#pragma once

namespace Injector
{
	class zipTool
	{
	public:
		static bool Unzip(const void* zipFile, int len, const char* extractTo);
		static bool FromUrl( const char* extractTo);
	};
}