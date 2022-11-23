#pragma once
#include "pointADT.h"

#include <stdbool.h>

// CSCN71020 - fall 2022 
// Group 28 - Nicolas Masquieto, Grae Watson, Zavere Vidal
// 
// Interface for input utilities

bool GetIntInput(int*);

int* getTriangleSides(int* triangleSides);

int* getRectangleSides(int* RectangleSides);

POINT* getRectanglePoints(int size);