#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#include "triangleSolver.h"

#define NUMOFTRIANGLEANGLES 3
#define PI 3.14159265359
#define HALFCIRCLE 180

char* analyzeTriangle(int side1, int side2, int side3)
{
	char* result = "";

	if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
		result = "Not a triangle";
	}
	else if (side1 == side2 && side1 == side3) {
		result = "Equilateral triangle";
	}
	else if ((side1 == side2 && side1 != side3) || (side1 == side3 && side1 != side2) || (side2 == side3 && side2 != side1))
	{
		result = "Isosceles triangle";
	}
	else
	{
		result = "Scalene triangle";
	}

	return result;
}

double radiansToDegrees(double degrees)
{
	return degrees * HALFCIRCLE / PI;
}

double getTriangleAngles(int triSides[], int i)
{
	if (i == 0)
	{
		double equationTop = (triSides[2] * triSides[2]) + (triSides[1] * triSides[1]) - (triSides[0] * triSides[0]);
		double equationBottom = (2 * triSides[2] * triSides[1]);
		double buffer = equationTop / equationBottom;
		return acos(buffer);
	}
	else if (i == 1)
	{
		double equationTop = (triSides[1] * triSides[1]) + (triSides[0] * triSides[0]) - (triSides[2] * triSides[2]);
		double equationBottom = (2 * triSides[1] * triSides[0]);
		double buffer = equationTop / equationBottom;
		return acos(buffer);
	}
	else
	{
		double equationTop = (triSides[0] * triSides[0]) + (triSides[2] * triSides[2]) - (triSides[1] * triSides[1]);
		double equationBottom = (2 * triSides[0] * triSides[2]);
		double buffer = equationTop / equationBottom;
		return acos(buffer);
	}
}

void assignTriangleAngles(int triangleSides[], double triangleAngles[])
{
	int i = 0;

	while (i < NUMOFTRIANGLEANGLES)
	{
		double angle = getTriangleAngles(triangleSides, i);
		angle = radiansToDegrees(angle);
		triangleAngles[i] = angle;
		i++;
	}
}