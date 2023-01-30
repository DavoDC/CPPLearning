
#include "../Headers/Friends.h"

// Using statements should only be in CPP
using std::string;
using std::cout;
using std::endl;

// Inspired by:
// https://www.programiz.com/cpp-programming/friend-function-class


/// ### FRIEND FUNCTION TEST

// FRIEND FUNCTION DEFINITION
// Has no class in front , no scope operator!!!
void friendAdd(NumA objectA, NumB objectB) {

    // We can access private members of both classes!
    cout << "\n Original_Sum: " << objectA.numA + objectB.numB;

    // We can modify private members of both classes!
    objectA.numA = 5;
    objectB.numB = 2;
    cout << "\n New_Sum: " << objectA.numA + objectB.numB;
}



// Test friend function
void testFriendFunction() {

    // Create objects
    NumA objectA;
    NumB objectB;

    // Call friend function which accesses private fields from both
    friendAdd(objectA, objectB);
}



/// ### FRIEND CLASS TEST

void ClassA::secretAlgorithm()
{
    cout << "\n AlgoResult: " << ((secretNum * 22) / 11) + 33;
}

void ClassB::funcB()
{
    // Within Class B (declared as friend in A), can access:
    ClassA obA;
    // # Private functions!
    obA.secretAlgorithm();
    // # Private fields!
    cout << "\n SecretNum: " << obA.secretNum;
}

void testFriendClasses()
{
    // Create Class B object and call its method
    ClassB cbObject;
    cbObject.funcB();

    // INACCESSIBLE since prviate
    //ClassA obA;
    //obA.secretAlgorithm();
}