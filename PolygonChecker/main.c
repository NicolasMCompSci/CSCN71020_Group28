#include <stdio.h>
#include <stdbool.h>

#include "inputUtils.h"
#include "printUtils.h"
#include "triangleSolver.h"
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
				char* result = analyzeTriangle(triangleSidesPtr[0], triangleSidesPtr[1], triangleSidesPtr[2]);
				printf_s("%s\n", result);
				break;
			case 2:
				printf_s("Rectangle Selected.\n");
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