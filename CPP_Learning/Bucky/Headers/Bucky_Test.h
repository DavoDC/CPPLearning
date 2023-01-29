#pragma once

#include "../../CommonHeader.h"

// Include Bucky classes
#include "Sentinel.h"

// Function declarations
void testBucky();

void DefaultParamTest(int x = 5, int y = 2);

void PrintNumOverload(int x);
void PrintNumOverload(double x);

void PassByValue(int num);
void PassByReference(int* num);