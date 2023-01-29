
#include "../Headers/Bucky_Test.h"

// Using statements should only be in CPP
using std::string;
using std::cout;
using std::endl;

// Global variable test
int tuna = 69;

// Inspired by:
// https://www.youtube.com/playlist?list=PLAE85DE8440AA6B83

void testBucky()
{
	// ### Sentinel test
	// Sentinel s;
	// s.GetAgesFromUser();
	// s.PrintInfo();
	 
	// ### Default Parameters
	// DefaultParamTest(50);

	// ### Unary Scope Resolution Operator
	// int tuna = 22;
	// cout << tuna << endl;
	// cout << ::tuna << endl;  // '::' means use global instead

	// ### Function Overloading
	// PrintNumOverload(5);
	// PrintNumOverload(2.5);

	// ### Pointers
	//// Int
	//int num = 10; 
	//// A pointer to an int
	//int* ptr;
	//// The "address-of operator" (&) gets a pointer to a variable
	//ptr = &num; 
	//// Printing a ptr prints an address
	//cout << "\n> ptr (&num): " << ptr; 
	//// We can use star to dereference the pointer and get the data
	//cout << "\n> *ptr: " << *ptr;
	
	// ### Pass by Reference
	int passNum = 23;
	cout << "\nOriginal: " << passNum;
	PassByValue(passNum);
	cout << "\nAfter PassByValue(): " << passNum;
	PassByReference(&passNum); // Give address as takes ptr
	cout << "\nAfter PassByReference(): " << passNum;


	// End
	cout << "\n" << endl;
}


// Default 
void DefaultParamTest(int x, int y)
{
	cout << std::format("\nx: {}, y: {}, sum: {}", x, y, x + y);
}

// Function Overloading
void PrintNumOverload(int x)
{
	cout << "\nNumber (int): " << x << endl;
}

void PrintNumOverload(double x)
{
	cout << "\nNumber (dbl): " << x << endl;
}

// Pass by Value/Reference
void PassByValue(int num)
{
	num = num * 3;
}

void PassByReference(int* num)
{
	*num = *num * 3; // Dereference (*) for assigning + accessing data!
}