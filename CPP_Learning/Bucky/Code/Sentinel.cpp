
#include "../Headers/Sentinel.h"

// Using statements should only be in CPP
using std::string;
using std::cout;
using std::endl;

// Inspired by:
// https://www.youtube.com/watch?v=791XRPJYdfA&list=PLAE85DE8440AA6B83&t=433s


// Private function members
int Sentinel::GetAgeSum() const
{
	// Holder
	int sumHolder = 0;

	// Easy, surefire standard library way
	sumHolder = std::reduce(ages.begin(), ages.end());

	// Manual iteration with For-each loop :
	/*for (int curAge : ages) {
		sumHolder += curAge;
	}*/

	// Manual iteration with a For loop :
	/*int len = GetNumOfEntries();
	for (int i = 0; i < len; i++) {
		sumHolder += ages[i];
	}*/

	// Return value at end
	return sumHolder;
}

int Sentinel::GetNumOfEntries() const
{
	return ((int) ages.size());
}

int Sentinel::GetAverageAge() const
{
	if (GetNumOfEntries() == 0) {
		return 0;
	}
	else {
		int sum = GetAgeSum();
		int count = GetNumOfEntries();
		return sum / count;
	}
}

// Public function members
void Sentinel::GetAgesFromUser()
{
	// Sentinel value 
	// A special value that controls when to terminate a program, 
	// or when to step out of the loop, like here
	int sentinel = -1;
	
	// Last value entered
	int lastValue = 0;

	// Start msg
	cout << "\n# Welcome to Sentinel Data Entry #";

	// While user hasn't entered sentinel (stop signal)
	while (lastValue != sentinel)
	{
		// Instruct user
		// (Printing output uses INSERTION operator <<)
		cout << "\nPlease enter an age (or -1 if you are done):  ";

		// Get user input
		// (Getting input uses EXTRACTION operator >>)
		std::cin >> lastValue;

		// If not sentinel
		if (lastValue != -1)
		{
			// Add to list 
			ages.push_back(lastValue);

			// Notify
			cout << "> Added '" << lastValue << "' to list";
		}
	}
}

void Sentinel::PrintInfo()
{
	cout << "\n# Sentinel Info #";
	cout << "\nSum: " << GetAgeSum();
	cout << "\nCount: " << GetNumOfEntries();
	cout << "\nAverage: " << GetAverageAge();
}