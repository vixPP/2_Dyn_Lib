#pragma once
#include <string>

#ifdef DYNLIBRARY__EXPORTS
#define  DYNLIBRARY_API __declspec(dllexport)
#else
#define  DYNLIBRARY_API __declspec(dllimport)
#endif

namespace DynLib
{
	class Leaver
	{
	public:
		DYNLIBRARY_API void leave(std::string name);
	};

}