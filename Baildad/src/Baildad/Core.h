#pragma once

#ifdef BD_PLATFORM_WINDOWS
	#ifdef BD_BUILD_DLL
		#define BAILDAD_API __declspec(dllexport)
	#else
#define BAILDAD_API __declspec(dllimport)
#endif
#else
#error Baildad Only Supports Windows!
#endif