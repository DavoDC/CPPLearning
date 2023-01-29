
#include "../Headers/Song_Test.h"

// Using statements should only be in CPP
using std::string;
using std::cout;
using std::endl;

void testSong()
{
	// Create objects in different ways,
	// then call methods

	// Default Song
	Song defaultSong;
	defaultSong.PrintTitle();
	defaultSong.PrintArtist();

	// Param 1
	Song backInBlack = Song("Back in Black", "AC_DC");
	backInBlack.PrintTitle();
	backInBlack.PrintArtist();

	// Param 2
	Song wagmi("WAGMI", "Akira");
	wagmi.PrintTitle();
	wagmi.PrintArtist();
}
// Destructor gets called automatically here!