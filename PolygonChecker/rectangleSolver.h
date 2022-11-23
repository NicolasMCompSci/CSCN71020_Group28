#pragma once

#include <stdbool.h>

// CSCN71020 - fall 2022 
// Group 28 - Nicolas Masquieto, Grae Watson, Zavere Vidal
// 
// Interface for Rectangle Solver functions

bool checkIfRectangleByPoints(int, int, int, int, int, int, int, int);

char* getRectangleResultForPrint(bool);
//char* analyzeRectangle(int side1, int side2, int side3, int side4)