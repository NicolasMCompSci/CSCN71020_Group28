#include "inputUtils.h"

#include <stdio.h>

// CSCN71020 - fall 2022 
// Group 28 - Nicolas Masquieto, Grae Watson, Zavere Vidal
// 
// Implementation for input utilities

int* getTriangleSides(int* triangleSides) {
	printf_s("Enter the three sides of the triangle: ");
	for (int i = 0; i < 3; i++)
	{
		scanf_s("%d", &triangleSides[i]);
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