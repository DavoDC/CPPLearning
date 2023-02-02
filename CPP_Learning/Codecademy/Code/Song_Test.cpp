
#include "../Headers/Song_Test.h"

// Using statements should only be in CPP
using std::string;
using std::cout;
using std::endl;

// Internal declarations
void testAuto();

class Parent1 {
public:
	virtual void doSomething() {
		cout << "\n Hey from parent1!";
	}
};

class Parent2 {
public:
	virtual void doSomething() {
		cout << "\n Hey from parent2!";
	}
};

// MULTIPLE INHERITANCE
class Child : public Parent1, public Parent2 {
public:
	void doSomething() {
		cout << "\n Hey from child!";
	}
};


void testSong()
{
	// My little inheritance test
	// NORMAL WAY
	// - Child impl works without virtual
	// - If no child impl, parent is fallback
	Child c;
	c.doSomething();

	// POINTER WAY
	// No virtual on parent = USES PARENT
	// Virtual on parent = OVERRIDDEN, uses child
	Parent1* parPtr = &c;
	parPtr->doSomething();

	


	// Create objects in different ways,
	// then call methods

	// Default Song
	//Song defaultSong;
	//defaultSong.PrintTitle();
	//defaultSong.PrintArtist();

	//// Param 1
	//Song backInBlack = Song("Back in Black", "AC_DC");
	//backInBlack.PrintTitle();
	//backInBlack.PrintArtist();

	//// Param 2
	//Song wagmi("WAGMI", "Akira");
	//wagmi.PrintTitle();
	//wagmi.PrintArtist();

	// ### AUTO TEST
	// Test auto keyword (personal addition)
	//testAuto();

	// Space
	cout << "\n" << endl;
}
// Destructor gets called automatically here!



// ### AUTO TEST
// cannot forward declare!
auto addAnythingAUTO(auto thing1, auto thing2)
{
	return thing1 + thing2;
}

void testAuto()
{
	// Auto variables infer type
	auto var1 = 10;
	auto var2 = 5.5;
	auto var3 = var1 + var2;
	auto fav = Song();
	cout << "\nvar3: " << var3;
	fav.PrintTitle();

	// Auto function
	cout << "\nadd: " << addAnythingAUTO(5, 2);
	cout << "\nadd: " << addAnythingAUTO(5, 2.5);
	std::string s1 = "hey ";
	std::string s2 = "there!";
	cout << "\nadd: " << addAnythingAUTO(s1, s2);

	// Decltype = returns the type of something else
	decltype(s1) newVar = "ayo!";
	cout << "\ndecltype: " << newVar;
}


