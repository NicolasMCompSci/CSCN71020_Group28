#pragma once
#include "pointADT.h"

#include <stdbool.h>

// CSCN71020 - fall 2022 
// Group 28 - Nicolas Masquieto, Grae Watson, Zavere Vidal
// 
// Interface for Rectangle Solver functions

bool checkIfRectangleByPoints(POINT, POINT, POINT, POINT);

void getRectangleSidesFromPoints(float[], POINT[], int);
float getFloatPerimeterFromSides(float[], int);
float getRectangleArea(float[]);

char* getRectangleResultForPrint(bool);

//char* analyzeRectangle(int side1, int side2, int side3, int side4)