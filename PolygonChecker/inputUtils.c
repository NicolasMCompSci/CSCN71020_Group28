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

// outdated function, not usable since it doesn't fit our requirements
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
		if (!GetIntInput(&rectangleSides[i]))
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
	int main()

	int i, j;
	int x[4], y[4];
	float d1, d2, d3, d4;
	float peri, area;

	printf(" Enter your Points Below in the Given Format : ");
	printf("\nP2\t\tP3");
	printf("\n\n");
	printf("P1\t\tP4");
	// Get 4 points from user
	for (i = 0; i < 4; i++) {
		printf("\nEnter x[%d] and y[%d]: \n", i + 1, i + 1);
		scanf("%d%d", &x[i], &y[i]);
	}

	// Validate user inputs 
	for (i = 0; i < 4; i++) {
		if (x[i] < 0 || y[i] < 0) {
			printf("Invalid input, only positive values are accepted. \n");
			return 0;
		}
	}
	return 0;
}