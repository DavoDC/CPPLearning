
#include "../Headers/Teacher.h"

// Using statements should only be in CPP
using std::string;
using std::cout;
using std::endl;

Teacher::Teacher(string name, string company, int age, string Subject)
	:Employee(name, company, age)
{
	this->Subject = Subject;
}

void Teacher::PrepareLesson()
{
	cout << Name + " is preparing " + Subject << " lesson!" << endl;
}

// Polymorphism section function
void Teacher::Work()
{
	cout << "Work(): " << Name << " is teaching " + Subject << " !" << endl;
}