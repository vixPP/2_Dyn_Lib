#include "DynLib.h"
#include <iostream>
#include "windows.h"
namespace DynLib
{
	void Leaver::leave(std::string name)
	{
		std::cout << "Введите имя: " << '\f';
		std::cin >> name;
		std::cout << "До свидания, " << name << '!';
	}

}