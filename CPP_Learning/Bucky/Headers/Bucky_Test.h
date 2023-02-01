#pragma once

#include "../../CommonHeader.h"

// Include Bucky classes
#include "Sentinel.h"
#include "Friends.h"

// Function declarations
void testBucky();

void DefaultParamTest(int x = 5, int y = 2);

void PrintNumOverload(int x);
void PrintNumOverload(double x);

void PointersTest();

void TestWaysToPass(int passNum);
void PassByValue(int num);
void PassByReference(int& num);
void PassByAddress_or_Pointer(int* num);

void testTemplates();

// Class that uses templates
template <class T>
class MagicClass {

private:
	T num1;
	T num2;

public:
	MagicClass(T num1, T num2) {
		this->num1 = num1;
		this->num2 = num2;
	}

	T bigger();
};

// SPECIALIZED TEMPLATE
template <>
class MagicClass<char> {

private:
	char char1;
	char char2;

public:
	MagicClass(char char1, char char2) {
		this->char1 = char1;
		this->char2 = char2;
	}

	std::string getCombo();
};


// Func decl cont
void testExceptions();

void testStringFunctions();