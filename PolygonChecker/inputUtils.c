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
		getchar();
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

int* getRectangleSides(int* RectangleSides)
{
	printf_s("Enter the four sides of the rectangle: ");
	for (int i = 0; i < 3; i++)
	{
		scanf_s("%d", &RectangleSides[i]);
	}
	return RectangleSides;

}