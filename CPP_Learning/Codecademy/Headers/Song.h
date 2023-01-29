#pragma once

#include "../../CommonHeader.h"

class Song {

private:
    // Attributes/data members
    std::string title;
    std::string artist;

    // Private methods/function members
    std::string GetTitle();
    std::string GetArtist();

public:
    // Constructors
    Song();
    Song(std::string new_title, std::string new_artist);

    // Destructor
    ~Song();

    // Public methods/function members
    void PrintTitle();
    void PrintArtist();
};