
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

	// ### 6 - Ways to Pass
	//TestWaysToPass(3);

	// ### 7 - Friend Tests
	// testFriendFunction();
	// testFriendClasses();

	// ### 8 - Function Templates
	testFuncTemplate();

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

	// Declare a float pointer
	float* pointFloat;

	// Dynamically allocate memory
	// We use 'NEW' IN C++ to ALLOCATE MEMORY
	pointFloat = new float;

	// Assign a value to memory space
	*pointFloat = 45.45f;

	// Print out value
	cout << *pointFloat << endl;

	// Deallocate the memory
	// We use 'DELETE' IN C++ to DE-ALLOCATE MEMORY
	delete pointFloat;
}


// ### 6 - Ways to Pass
void TestWaysToPass(int passNum)
{
	cout << "\nOriginal: " << passNum;

	// BY VALUE
	PassByValue(passNum); // Normal
	cout << "\nAfter PassByValue(): " << passNum;

	// BY REFERENCE
	PassByReference(passNum); // Normal
	cout << "\nAfter PassByReference(): " << passNum;

	// BY ADDRESS OR POINTER
	PassByAddress_or_Pointer(&passNum); // GIVE ADDRESS
	cout << "\nPassByAddress_or_Pointer(): " << passNum;
}

void PassByValue(int num)
{
	num = num * 2;
}

void PassByReference(int& num)
{
	num = num * 3;
}

void PassByAddress_or_Pointer(int* num)
{
	// Dereference (*) for assigning + accessing data!
	*num = *num * 4;
}



// ### 8 - Function Templates
template <class bucky>  // Generic data type
bucky addAnything(bucky thing1, bucky thing2)
{
	return thing1 + thing2;
}

template <class A, class B>  // Two generic data types
A smallerOfTwoDiff(A first, B second)
{
	return (A) ( first < second ? first : second);
}

void testFuncTemplate()
{
	// Can use with ints and doubles due to template!
	cout << "\nIntResult: " << addAnything(5, 10);
	cout << "\nDoubleResult: " << addAnything(2.15, 10.25);

	// Can even use with proper strings! (but not const char*)
	std::string big = "Big";
	std::string smoke = "Smoke";
	cout << "\nStringResult: " << addAnything(big, smoke);

	// Smaller of different types
	cout << "\nComparison: " << smallerOfTwoDiff(22.25, 10);
	cout << "\nComparison: " << smallerOfTwoDiff(5.15, 10);
}

