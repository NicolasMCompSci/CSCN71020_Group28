#include <stdio.h>
#include <stdbool.h>

#include "inputUtils.h"
#include "printUtils.h"
#include "triangleSolver.h"
#include "pointADT.h"
#include "rectangleSolver.h"

#define HIGHEST_CASE 2

int side = 0;

int main()
{
	bool continueProgram = true;

	while (continueProgram) 
	{
		printWelcome();
		printShapeMenu();

		int shapeChoice = 0;
		// if menu inout returns as invalid it sets the shapeChoice to the "default" case
		if (!GetIntInput(&shapeChoice))
			shapeChoice = HIGHEST_CASE + 1;

		switch (shapeChoice)
		{
			case 1:
				printf_s("Triangle selected.\n");
				int triangleSides[3] = { 0, 0, 0 };
				int* triangleSidesPtr = getTriangleSides(triangleSides);
				char* triResult = analyzeTriangle(triangleSidesPtr[0], triangleSidesPtr[1], triangleSidesPtr[2]);
				printf_s("%s\n", triResult);
				break;
			case 2:
				printf_s("Rectangle Selected.\n");
				POINT points[4] = { 0, 0, 0, 0 };
				if (getRectanglePoints(points, 4))
				{
					// gets result, needs updated functions using POINT adt array.
					bool isRectangle = checkIfRectangleByPoints(points[0], points[1], points[2], points[3]);
					char* recResult = getRectangleResultForPrint(isRectangle);
					float sideLengths[4];
					getRectangleSidesFromPoints(sideLengths, points, 4);
					float perimeter = getFloatPerimeterFromSides(sideLengths, 4);
					// prints results
					printf_s("%s\n Perimeter: %f units\n", recResult, perimeter);

					// gets area of rectangle and prints area shape is a rectangle
					//if (isRectangle)
					//{
						//float area = getRectangleArea(sideLengths, 2);
						//printf_s("Area: %f units squared\n", area);
					//}
				}
				else
					printf_s("Invalid inputs detected, quitting function.");
				break;
			case 0:
				continueProgram = false;
				break;
			default:
				printf_s("Invalid value entered.\n");
				break;
		}
	}
	return 0;
}