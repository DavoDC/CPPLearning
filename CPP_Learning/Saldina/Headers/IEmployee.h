#pragma once

#include "../../CommonHeader.h"

// Abstract class
// Classes that implement must have certain implementations
class IEmployee {

	// Forces classes that implement to have this function
	// Needs to be overidden
	virtual void AskForPromotion() = 0;
};
