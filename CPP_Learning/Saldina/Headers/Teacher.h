#pragma once

#include "../../CommonHeader.h"
#include "Employee.h"

// CHILD CLASS
class Teacher :public Employee {

private:
	std::string Subject;

public:
	Teacher(std::string name, std::string company, int age, std::string Subject);

	void PrepareLesson();

	void Work();
};

