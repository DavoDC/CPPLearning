
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
	// ### 1 - Sentinel Test
	// Sentinel s;
	// s.GetAgesFromUser();
	// s.PrintInfo();

	// ### 2 - Default Parameters Test
	// DefaultParamTest(50);

	// ### 3 - Unary Scope Resolution Operator
	// int tuna = 22;
	// cout << tuna << endl;
	// cout << ::tuna << endl;  // '::' means use global instead

	// ### 4 - Function Overloading
	// PrintNumOverload(5);
	// PrintNumOverload(2.5);

	// ### 5 - Pointers
	// PointersTest();

	// ### 6 - Pass by Value/Reference
	//int passNum = 23;
	//cout << "\nOriginal: " << passNum;
	//PassByValue(passNum);
	//cout << "\nAfter PassByValue(): " << passNum;
	//PassByReference(&passNum); // Give address as takes ptr
	//cout << "\nAfter PassByReference(): " << passNum;

	// ### 7 - Friend Tests
	//testFriendFunction();
	// testFriendClasses();

	// End
	cout << "\n" << endl;
}


// ### 2 - Default Parameters Test
void DefaultParamTest(int x, int y)
{
	cout << std::format("\nx: {}, y: {}, sum: {}", x, y, x + y);
}

// ### 4 - Function Overloading
void PrintNumOverload(int x)
{
	cout << "\nNumber (int): " << x << endl;
}

void PrintNumOverload(double x)
{
	cout << "\nNumber (dbl): " << x << endl;
}

// ### 5 - Pointers Test
void PointersTest()
{
	// Int
	int num = 10;

	// A pointer to an int
	int* ptr;

	// The "address-of operator" (&) gets a pointer to a variable
	ptr = &num;

	// Printing a ptr prints an address
	cout << "\n> ptr (&num): " << ptr;

	// We can use star to dereference the pointer and get the data
	cout << "\n> *ptr: " << *ptr;
}


// ### 6 - Pass by Value/Reference
void PassByValue(int num)
{
	num = num * 3;
}

void PassByReference(int* num)
{
	*num = *num * 3; // Dereference (*) for assigning + accessing data!
}