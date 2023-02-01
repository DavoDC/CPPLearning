#pragma once

#include "../../CommonHeader.h"

// Abstract class
// ABSTRACT CLASSES ARE ONES WITH PURE VIRTUAL FUNCTIONS
// Classes that implement must have certain implementations
class IEmployee {

	// Forces classes that implement to have this function
	// Needs to be overidden
	// PURE VIRTUAL FUNCTION
	virtual void AskForPromotion() = 0;
};
