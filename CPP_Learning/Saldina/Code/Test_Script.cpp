
#include "../Headers/Test_Script.h"

// Using statements should only be in CPP
using std::string;
using std::cout;
using std::endl;

// Function to test Saldina code
// 'Saldina code' refers to code developed during this course:
// https://youtu.be/wN0x9eZLix4
void testSaldina()
{
	// Create objects
	// PARENT
	Employee defaultEmp; // Creates object using default constructor
	Employee emp = Employee("Jimmy McGill (Emp)", "HHM", 55);

	// CHILDREN
	// When child objects are created, the parent constructor is ran
	// In the background, the parent object needs to be set up
	// The constructor isn't really inherited but is used.
	Developer defaultDev;

	Developer dev = Developer("Dave (Dev)", "ImmT", 23, "C++");
	Teacher teacher = Teacher("J (Teacher)", "U", 22, "CS");

	// Call Methods
	cout << "> Default Employee:";
	defaultEmp.PrintSummary();
	defaultEmp.AskForPromotion();
	cout << "\n";

	cout << "> Employee:";
	emp.PrintSummary();
	emp.AskForPromotion();
	emp.Work();
	cout << "\n";

	cout << "> Default Developer:";
	defaultDev.PrintSummary(); // Parent method
	defaultDev.AskForPromotion(); // Parent method
	defaultDev.PrintFavLang(); // Own/child method
	cout << "\n";

	cout << "> Developer:";
	dev.PrintSummary();
	dev.PrintFavLang();
	dev.Work();  // Work methods have same names but diff impl (polymorphic)
	cout << "\n";

	cout << "> Teacher:";
	teacher.PrintSummary();
	teacher.PrepareLesson();
	teacher.Work();
	cout << "\n";

	// TESTS
	// cout << "\n# Polymorphic Method Call Tests #";

	// TEST 1
	// cout << "\nDirect storage of child in parent variable:";
	Employee empObjectHolder = teacher;
	empObjectHolder.PrintSummary();
	empObjectHolder.Work(); // Doesn't work, uses parent implementation

	// TEST 2
	// cout << "\nStoring child class object refences in parent pointers:\n";
	// Employee pointers can hold references to child class objects
	// Base class pointers that hold derived class objects
	Employee* empPtr1 = &dev;
	Employee* empPtr2 = &teacher;

	// Put in a list
	std::list<Employee*> employees;
	employees.push_back(empPtr1);
	employees.push_back(empPtr2);
	employees.push_back(empPtr1);

	// Make all employees work with a for each loop,
	// with type-specific implementation!
	for (Employee* curEmpP : employees)
	{
		// curEmpP->Work(); 
		// '->' symbol is for accessing members of a pointer
		// 
		// Work method must be VIRTUAL IN PARENT for CHILD IMPL to be used!
		// (Virtual keyword enables overriding by children)
		//
		// This works! Child implementations are used
	}

}


