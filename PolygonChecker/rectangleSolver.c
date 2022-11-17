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


// zavere
//char* analyzeRectangle(int side1, int side2, int side3, int side4) {   
//	char* result = "";
//	if (side1 <= 0 || side2 <= 0 || side3 <= 0 || side4 <= 0) {
//		result = "Not a Rectangle";
//	}
//	else if ((side1 == side2 && side3 == side4) || (side1 == side2 && side3 && side4 != side1 && side2))
//	{
//		result = "Rectangle";
//	}
//
//	else
//	{
//		result = "Square";
//	}
//
//	return result;
//}