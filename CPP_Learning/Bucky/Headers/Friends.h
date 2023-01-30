#pragma once

#include "../../CommonHeader.h"

/// ### FRIEND FUNCTION TEST

// Forward declaration needed since NumB referenced in NumA
class NumB;

// NUM A CLASS
class NumA {

public:
    // Default constructor that sets field
    NumA() : numA(100) {}
    // NumA() { numA = 100; } // Equivalent way

private:
    // Private field
    int numA;

    // Friend function declaration (in both classes)
    friend void friendAdd(NumA, NumB);
};



// NUM B CLASS
class NumB {

public:
    // Default constructor that sets field
    NumB() : numB(11) {}
    // NumB() { numB = 11; } // Equivalent way

private:
    // Private field
    int numB;

    // Friend function declaration (in both classes)
    friend void friendAdd(NumA, NumB);
};



// Test func decl
void testFriendFunction();



/// ### FRIEND CLASS TEST

// Forward declaration needed since we will ref ClassB
class ClassB;


class ClassA {

private: 
    int secretNum;
    void secretAlgorithm();

    // ClassA declares ClassB as its friend, giving it everything
    friend class ClassB;
public:
    ClassA() : secretNum(22) { // Function call or field set can go here
        // secretNum = 22;     // Equivalent alternative
    }

};


class ClassB {

public:
    void funcB();

};


// Test func decl
void testFriendClasses();