
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
	//Sentinel s;
	//s.GetAgesFromUser();
	//s.PrintInfo();

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

	// ### 8 - Templates
	// testTemplates();

	// ### 9 - Exceptions
	//testExceptions();

	// ### 10 - String Functions
	// testStringFunctions();

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
	// Dynamically allocate memory
	// We use 'NEW' IN C++ to ALLOCATE MEMORY
	float* pointFloat = new float;

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



// ### 8 - Templates
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

// For class that uses templates
template <class T>
// IMPORTANT = when definining funcions for a class template,
// need to put <T> after class name!
T MagicClass<T>::bigger() {
	return (num1 > num2 ? num1 : num2);
}


// SPECIALIZED CLASS TEMPLATE
string MagicClass<char>::getCombo() {

	// Convert to string objects, combine, and return
	string string1(1, char1);
	string string2(1, char2);
	return (string1 + string2);
}

void testTemplates()
{
	// Can use with ints and doubles due to template!
	cout << "\nIntResult: " << addAnything(5, 10);
	cout << "\nDoubleResult: " << addAnything(2.15, 10.25);

	// Can even use with proper strings! (but not const char*)
	std::string big = "Big";
	std::string smoke = "Smoke";
	cout << "\nStringResult: " << addAnything(big, smoke);

	// Smaller of different types
	cout << "\n1_Comparison: " << smallerOfTwoDiff(22.25, 10);
	cout << "\n2_Comparison: " << smallerOfTwoDiff(5.15, 10);

	// Class that uses template
	MagicClass m1 = MagicClass(10.1, 20.1);
	MagicClass<int> m2 = MagicClass(2, 8); // can specify datatype
	cout << "\n\n1_Bigger(): " << m1.bigger();
	cout << "\n2_Bigger(): " << m2.bigger();

	// Specialized template class
	MagicClass m3 = MagicClass('D', 'C');
	cout << "\n3_getCombo(): " + m3.getCombo(); // can concat since actual string
	
}




// ### 9 - Exceptions
void testExceptions()
{
	cout << "\n# Exceptions Test #";
	try {

		// string username = "dog";
		string username = "doggy";

		cout << "\nUsername: " + username;

		// If username is too short
		if (username.length() <= 3)
		{
			// Notify and throw error
			string msg = "Username too short!";
			throw msg;
		}

		// If username is all lowercase letters
		if (all_of(username.begin(), username.end(), islower)) {

			// Notify and throw error
			string msg = "Username should have a capital letter!";
			throw msg;
		}
	}
	catch (double example)
	{
		// This is to show we can catch any data type!
		// e..g
		// catch (char x)
		// catch (int x)
	}
	catch (string x)
	{
		cout << "\nErr: " + x;
	}
	catch(...)  // ELLIPSIS catches every/anything!
	{
		cout << "\nGeneral Error!";
	}

}


// ### 10 - String Functions
void testStringFunctions()
{
	cout << "\n# Common/Useful String Functions (inbuilt/lib) #";

	// Different ways to make strings
	string normal = "normal string";
	string diff("diff string");
	string empty;


	// ASSIGN = Copies a string
	//empty = normal; // valid
	empty.assign(normal);
	cout << "\nempty: " + empty;


	// LENGTH = Gets string length
	// AT = Gets character at position
	cout << "\n";
	for (int i = 0; i < normal.length(); i++) {
		cout << normal.at(i) << " ";
	}


	// SUBSTRING (SUBSTR)
	// Extracts a string fragment
	// Goes from 2nd spot to 7th spot like normal
	cout << "\nnormal.substr(2, 7): " + normal.substr(2, 7);
	// Strange! starts at 10th and moves 3 ahead
	cout << "\nnormal.substr(15, 1): " + normal.substr(10, 3);


	// SWAP = Swaps two strings
	string a("apple");
	string b("bean");
	a.swap(b);
	cout << "\na: " + a;


	// FIND = Finds the position of the start of fragment in a string
	string hamstring("a ham is spam oh yes i am!");
	cout << "\n$$$ " + hamstring;
	// Find goes from start
	cout << "\nfind('am'): " << hamstring.find("am");
	// Rfind = REVERSE find
	cout << "\nrfind('am'): " << hamstring.rfind("am");
	// Find last of = finds last one
	cout << "\nfind_last_of('am'): " << hamstring.find_last_of("am");


	// ERASE - erases AFTER a certain position
	hamstring.erase(9);
	cout << "\n$$$ erase(9): " + hamstring;


	// REPLACE - replaces a segment with something else
	// 1) start pos,   2) length of removal,  3) replacement
	hamstring.replace(2, 3, "banana");
	cout << "\n$$$ replace(): " + hamstring;


	// INSERT - inserts a string into a certain position
	// 1) start pos,  2) addition
	hamstring.insert(hamstring.length(), " ping pong");
	cout << "\n$$$ insert(): " + hamstring;
}