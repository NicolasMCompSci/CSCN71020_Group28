#include "inputUtils.h"

#include <stdio.h>

// CSCN71020 - fall 2022 
// Group 28 - Nicolas Masquieto, Grae Watson, Zavere Vidal
// 
// Implementation for input utilities

bool GetIntInput(int* tempInput)
{
	// checks if input counts as an integer type, if not this will return false
	if (scanf_s("%d", tempInput) != 1)
	{
		int dump = getchar();
		return false;
	}

	// returns true if input was a success
	return true;
}

int* getTriangleSides(int* triangleSides)
{
	printf_s("Enter the three sides of the triangle: ");

	for (int i = 0; i < 3; i++)
	{
		if (!GetIntInput(&triangleSides[i]))
		{
			triangleSides[i] = 0;
			printf_s("Ivalid Input.\n");
		}
	}

	return triangleSides;
}

int* getRectangleSides(int* rectangleSides)
{
	printf_s("Enter the four sides of the rectangle: ");
	for (int i = 0; i < 4; i++)
	{
		if (!GetIntInput(rectangleSides[i]))
		{
			rectangleSides[i] = 0;
			printf_s("Ivalid Input.\n");
		}
	}

	return rectangleSides;
}

POINT* getRectanglePoints(int size)
{
	//Zavere 
	// 
	//bool FindPoint(int x1, int y1, int x2, int y2, int x, int y)
	//{
	//	if (x > x1 && x < x2 && y > y1 && y < y2)
	//		return true;

	//	return false;
	//}


	//int main()
	//{
	//	// bottom-left and top-right
	//	// corners of rectangle
	//	int x1 = 0, y1 = 0, x2 = 10, y2 = 8;

	//	// given points
	//	int x = 1, y = 5;

	//	// function call
	//	if (FindPoint(x1, y1, x2, y2, x, y))
	//		printf("Yes");
	//	else
	//		printf("No");

	//	return 0;
	//}

}