
#include "../Headers/Song.h"

// Using statements should only be in CPP
using std::string;
using std::cout;
using std::endl;

// Inspired by Codeacademy class:
// https://www.codecademy.com/courses/learn-c-plus-plus/lessons/cpp-classes-and-objects/exercises/cpp-class-access-control

// Default Constructor
Song::Song() {
    title = "Title";
    artist = "Artist";
}

// Param Constructor
Song::Song(string new_title, string new_artist) {
    title = new_title;
    artist = new_artist;
}

// ### Destructor 
// For local variable objects,
// their destructor is automatically called when they go out of scope.
Song::~Song() {
    cout << "\nGoodbye '" + title + "'!" << endl;
}

// Method Definitions (outside of class)
string Song::GetTitle() {
    return title;
}

string Song::GetArtist() {
    return artist;
}   


void Song::PrintTitle() {
    cout << "\nTitle: " << GetTitle();// << endl;
}

void Song::PrintArtist() {
    cout << "\nArtist: " << GetArtist() << endl;
}