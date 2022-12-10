#include "rectangleSolver.h"

#include <stdio.h>
#include <stdbool.h>
#include <stdarg.h>
#include <math.h>

// CSCN71020 - fall 2022 
// Group 28 - Nicolas Masquieto, Grae Watson, Zavere Vidal
// 
// Implementation for Rectangle Solver functions

bool checkIfRectangleByPoints(POINT pointOne, POINT pointTwo, POINT pointThree, POINT pointFour)
{
	// this only works if point 1 is bottom left point point 2 is top left, point 3 top right, point 4 bottom right
	if (pointOne.x != pointTwo.x || pointTwo.y != pointThree.y || pointThree.x != pointFour.x || pointFour.y != pointOne.y || pointOne.x == pointFour.x || pointOne.y == pointTwo.y)
		return false;
	else
		return true;
}

void getRectangleSidesFromPoints(float result[], POINT points[], int arrSize)
{
	// find array index max for array iterations
	int maxArrIndex = arrSize - 1;
	
	// iterates through the arrays and populates result[] with the side lengths
	for (int i = 0; i < maxArrIndex; i++)
	{
		int next = i + 1;
		float xLen = points[next].x - points[i].x;
		float yLen = points[next].y - points[i].y;
		result[i] = sqrt((xLen * xLen) + (yLen * yLen));
	}

	// special calculation needed for last line
	float xLen = points[maxArrIndex].x - points[0].x;
	float yLen = points[maxArrIndex].y - points[0].y;
	result[maxArrIndex] = sqrt((xLen * xLen) + (yLen * yLen));
}

float getFloatPerimeterFromSides(float sideLengths[], int arrSize)
{
	// declare and initialize perimeter to 0 for safety
	float perimeter = 0;
	// sums the length of all sides to get perimeter
	for (int i = 0; i < arrSize; i++)
		perimeter += sideLengths[i];

	return perimeter;
}

float getRectangleArea(float sideLengths[], int size)
{
	// returns the product between the first and second side lengths
	return sideLengths[0] * sideLengths[1];
}

char* getRectangleResultForPrint(bool isRectangle)
{
	// declare and initialize result to empty string
	char* result = "";

	if (isRectangle)
		result = "Rectangle";
	else
		result = "Not a rectangle";

	return result;
}