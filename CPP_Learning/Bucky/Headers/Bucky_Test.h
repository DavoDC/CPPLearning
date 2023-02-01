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

void testFuncTemplate();