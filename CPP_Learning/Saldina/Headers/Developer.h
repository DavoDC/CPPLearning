#pragma once

#include "../../CommonHeader.h"
#include "Employee.h"

// CHILD CLASS
class Developer :public Employee {

private:
	std::string FavProgLang;

public:

	Developer();
	Developer(std::string Name, std::string Company, int Age, std::string Lang);

	void PrintFavLang();

	void Work();
};

