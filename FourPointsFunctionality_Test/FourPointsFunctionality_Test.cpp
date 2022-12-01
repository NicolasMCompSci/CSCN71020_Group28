#include "pch.h"
#include "CppUnitTest.h"

extern "C" bool checkIfRectangleByPoints(int, int, int, int, int, int, int, int);
extern "C" typedef struct point { int x; int y; }POINT;

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace FourPointsFunctionalityTest
{
	TEST_CLASS(FourPointsFunctionalityTest)
	{
	public:
		
		TEST_METHOD(Functional01)
		{
			// basic functional test with small numbers
			POINT first; first.x = 0; first.y = 0;
			POINT second; second.x = 0; second.y = 1;
			POINT third; third.x = 1; third.y = 1;
			POINT fourth; fourth.x = 1; fourth.y = 0;
			bool result = checkIfRectangleByPoints(first, second, third, fourth);
			Assert::AreEqual(true , result);
		}

		TEST_METHOD(Boundary01)
		{
			// tests values for biggest possible rectangle
			POINT first; first.x = 0; first.y = 0;
			POINT second; second.x = 0; second.y = 2147483647;
			POINT third; third.x = 2147483647; third.y = 2147483647;
			POINT fourth; fourth.x = 2147483647; fourth.y = 0;
			bool result = checkIfRectangleByPoints(first, second, third, fourth);
			Assert::AreEqual(true, result);
		}

		TEST_METHOD(Exception01)
		{
			// exception test. first.x does not form a rectangle with other points
			POINT first; first.x = -1; first.y = 0;
			POINT second; second.x = 0; second.y = 1;
			POINT third; third.x = 1; third.y = 1;
			POINT fourth; fourth.x = 1; fourth.y = 0;
			bool result = checkIfRectangleByPoints(first, second, third, fourth);
			Assert::AreEqual(false, result);
		}

		TEST_METHOD(Exception02)
		{
			// checks the result if all points are the same
			POINT first; first.x = 0; first.y = 0;
			POINT second; second.x = 0; second.y = 0;
			POINT third; third.x = 0; third.y = 0;
			POINT fourth; fourth.x = 0; fourth.y = 0;
			bool result = checkIfRectangleByPoints(first, second, third, fourth);
			Assert::AreEqual(false, result);
		}
	};
}
