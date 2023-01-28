#pragma once

#include "../../CommonHeader.h"
#include "IEmployee.h"

// Header files = Class declarations 

// PARENT CLASS
// implements abstract class
class Employee:IEmployee {

private:
	std::string Company;
	int Age;
	std::string GetSummary();

protected: // Accessible in children
	std::string Name;

public:
	std::string test;

	// Constructors
	Employee();
	Employee(std::string Name, std::string Company, int Age);

	// Field getters/setters
	std::string GetName();
	void SetName(std::string Name);

	std::string GetCompany();
	void SetCompany(std::string Company);

	int getAge();
	void setAge(int Age);
	
	void PrintSummary();

	// From interface
	void AskForPromotion();

	// Virtual function must be inside class decl.
	// Virtual enables overridding by children
	virtual void Work()
	{
		std::cout << "Work(): " << Name << " is doing tasks!" << std::endl;
	}
};

