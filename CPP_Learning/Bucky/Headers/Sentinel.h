#pragma once

#include "../../CommonHeader.h"

#include <vector>
#include <numeric>

class Sentinel {

private:
    // Attributes/data members
    std::vector<int> ages;

    // Private methods/function members
    // (Constant means these won't change the object)
    int GetAgeSum() const;
    int GetNumOfEntries() const;
    int GetAverageAge() const;

public:

    // Public methods/function members
    void GetAgesFromUser();
    void PrintInfo();
};