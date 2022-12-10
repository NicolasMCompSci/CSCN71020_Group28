#include "pch.h"
#include "CppUnitTest.h"
#include <stdbool.h>

extern "C" typedef struct point { int x; int y; }POINT;
extern "C" bool checkIfRectangleByPoints(POINT, POINT, POINT, POINT);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace checkIfRectangleByPointsTest
{
	TEST_CLASS(checkIfRectangleByPointsTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			POINT one, two, three, four;

			one.x = 4;
			one.y = 4;
			two.x = 4;
			two.y = 4;
			three.x = 4;
			three.y = 4;
			four.x = 4;
			four.y = 4;

			checkIfRectangleByPoints(one, two, three, four);
		}
	};
}
