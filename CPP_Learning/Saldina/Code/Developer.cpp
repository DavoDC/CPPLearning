
#include "../Headers/Developer.h"

// Using statements should only be in CPP
using std::string;
using std::cout;
using std::endl;

Developer::Developer()
{
	FavProgLang = "Java";
}

Developer::Developer(string Name, string Company, int Age, string Lang)
	:Employee(Name, Company, Age) // Use parent constructor
{
	FavProgLang = Lang;
}

void Developer::PrintFavLang()
{
	// Can access public and protected members but not private!
	cout << GetName() + "'s fav: " + FavProgLang << endl;
}

// Polymorphism section function
void Developer::Work()
{
	cout << "Work(): " << Name << " is coding in " + FavProgLang << " !" << endl;
}