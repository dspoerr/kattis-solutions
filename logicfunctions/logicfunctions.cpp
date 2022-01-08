#include "logicfunctions.h"

// Compute xor
void exclusive(bool x, bool y, bool& ans) {
	ans = ((!x && y) || (x && !y));
}

// Compute implication
void implies(bool x, bool y, bool& ans) {
	ans = (!x || (x && y));
}

// Compute equivalence
void equivalence(bool x, bool y, bool& ans) {
	ans = (x == y);
}
