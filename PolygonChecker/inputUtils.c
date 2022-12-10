#define _CRT_SECURE_NO_WARNINGS
#include "inputUtils.h"

#include <stdio.h>

// CSCN71020 - fall 2022 
// Group 28 - Nicolas Masquieto, Grae Watson, Zavere Vidal
// 
// Implementation for input utilities

#define RECTANGLE_SIZE 4

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

// outdated function, not usable since it doesn't fit our requirements
int* getRectangleSides(int* rectangleSides)
{
	printf_s("Enter the four sides of the rectangle: ");
	for (int i = 0; i < 4; i++)
	{
		if (!GetIntInput(&rectangleSides[i]))
		{
			rectangleSides[i] = 0;
			printf_s("Ivalid Input.\n");
		}
	}

	return rectangleSides;
}

bool getRectanglePoints(POINT points[], int size)
{
	int i;
	int x[RECTANGLE_SIZE], y[RECTANGLE_SIZE];
	bool isRectangle = true;

	// Get 4 points from user
	for (i = 0; i < size; i++) {
		printf("\nEnter x[%d] and y[%d]: \n", i + 1, i + 1);
		if (!GetIntInput(&x[i]) || !GetIntInput(&y[i]))
		{
			isRectangle = false;
			printf_s("Ivalid Input.\n");
		}
	}

	// Calculate the coordinates of the four corners of the rectangle
	if (isRectangle)
		for (int i = 0; i < size; i++)
			points[i].x = x[i], points[i].y = y[i];

	return isRectangle;
}
