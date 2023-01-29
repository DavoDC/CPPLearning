#pragma once

#include "../../CommonHeader.h"

#include <vector>
#include <numeric>

class Sentinel {

private:
    // Attributes/data members
    std::vector<int> ages;

    // Private methods/function members
    int GetAgeSum();
    int GetNumOfEntries();
    int GetAverageAge();

public:

    // Public methods/function members
    void GetAgesFromUser();
    void PrintInfo();
};