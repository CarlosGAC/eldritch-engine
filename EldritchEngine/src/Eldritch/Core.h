#pragma once

#ifdef EL_PLATFORM_WINDOWS
	#ifdef EL_BUILD_DLL
		#define EL_API __declspec(dllexport)
	#else 
		#define EL_API __declspec(dllimport)
	#endif
#else
	#error Eldritch Engine only supports Windows
#endif