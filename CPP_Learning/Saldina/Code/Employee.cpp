
#include "../Headers/Employee.h"
#include "../Headers/IEmployee.h"

// Using statements should only be in CPP
using std::string;
using std::cout;
using std::endl;

// Source/CPP file = Class definitions 

Employee::Employee()
{
	Name = "None";
	Company = "None";
	Age = 18;
}


Employee::Employee(string Name, string Company, int Age)
{
	this->Name = Name;
	this->Company = Company;
	this->Age = Age;
}


string Employee::GetSummary()
{
	return format("I'm {} (age: {}), employed at {}", Name, Age, Company);
}


void Employee::PrintSummary()
{
	cout << "\nPrtSum(): " << GetSummary() << endl;
}


string Employee::GetName()
{
	return Name;
}


void Employee::SetName(string Name)
{
	this->Name = Name;
}


string Employee::GetCompany()
{
	return Company;
}


void Employee::SetCompany(string Company)
{
	this->Company = Company;
}


int Employee::getAge()
{
	return Age;
}


void Employee::setAge(int Age)
{
	if (Age >= 18) {
		this->Age = Age;
	}
	else {
		cout << "\nsetAge(): Invalid age";
	}
}



// Satisfies interface
void Employee::AskForPromotion() {
	if (Age > 30)
	{
		cout << "Prom(): " << Name << " got promoted!" << endl;
	}
	else
	{
		cout << "Prom(): Promotion denied" << endl;
	}
}
