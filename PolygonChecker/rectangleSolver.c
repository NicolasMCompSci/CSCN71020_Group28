#include <stdio.h>
#include <stdbool.h>

#include "rectangleSolver.h"

// CSCN71020 - fall 2022 
// Group 28 - Nicolas Masquieto, Grae Watson, Zavere Vidal
// 
// Implementation for Rectangle Solver functions

bool checkIfSquareByPoints(int pointOneX, int pointOneY, int pointTwoX, int pointTwoY, int pointThreeX, int pointThreeY, int pointFourX, int pointFourY)
{
	// this only works if point 1 is bottom left point point 2 is top left, point 3 top right, point 4 bottom right
	if (pointOneX != pointTwoX || pointTwoY != pointThreeY || pointThreeX != pointFourX || pointFourY != pointOneY)
		return false;
	else
		return true;
}