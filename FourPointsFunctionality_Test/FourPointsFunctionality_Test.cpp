#include "pch.h"
#include "CppUnitTest.h"

extern "C" typedef struct point { int x; int y; }POINT;
extern "C" bool checkIfRectangleByPoints(POINT, POINT, POINT, POINT);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace FourPointsFunctionalityTest
{
	// test cases for "4 points" functionality
	TEST_CLASS(FourPointsFunctionalityTest)
	{
	public:
		
		// Nicolas
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

		// Nicolas
		TEST_METHOD(Functional02)
		{
			// functional test in case rectangle is created counter-clockwise
			POINT first; first.x = 3; first.y = 0;
			POINT second; second.x = 3; second.y = 1;
			POINT third; third.x = 1; third.y = 1;
			POINT fourth; fourth.x = 1; fourth.y = 0;
			bool result = checkIfRectangleByPoints(first, second, third, fourth);
			Assert::AreEqual(true, result);
		}

		// Nicolas
		TEST_METHOD(Functional03)
		{
			// test when rectangle points are all negative
			POINT first; first.x = -100; first.y = -100;
			POINT second; second.x = -100; second.y = -300;
			POINT third; third.x = -200; third.y = -300;
			POINT fourth; fourth.x = -200; fourth.y = -100;
			bool result = checkIfRectangleByPoints(first, second, third, fourth);
			Assert::AreEqual(true, result);
		}

		// Nicolas
		TEST_METHOD(Boundary01)
		{
			// tests values for biggest possible rectangle
			POINT first; first.x = 0 - 2147483648; first.y = 0 - 2147483648;
			POINT second; second.x = 0 - 2147483648; second.y = 2147483647;
			POINT third; third.x = 2147483647; third.y = 2147483647;
			POINT fourth; fourth.x = 2147483647; fourth.y = 0 - 2147483648;
			bool result = checkIfRectangleByPoints(first, second, third, fourth);
			Assert::AreEqual(true, result);
		}

		// Nicolas
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

		// Nicolas
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

		// Grae
		TEST_METHOD(GFunctional00)
		{
			// check if gives false to input that result in a dot
			POINT one, two, three, four;

			one.x = 4;
			one.y = 4;
			
			two.x = 4;
			two.y = 4;
			
			three.x = 4;
			three.y = 4;
			
			four.x = 4;
			four.y = 4;

			Assert::IsFalse(checkIfRectangleByPoints(one, two, three, four));
		}

		//Grae
		TEST_METHOD(GFunctional01)
		{
			// check if gives false to input that result in a line
			POINT one, two, three, four;

			one.x = 0;
			one.y = 0;
			
			two.x = 0;
			two.y = 0;
			
			three.x = 4;
			three.y = 0;
			
			four.x = 4;
			four.y = 0;

			Assert::IsFalse(checkIfRectangleByPoints(one, two, three, four));
		}

		//Grae
		TEST_METHOD(GFunctional02)
		{
			// check if gives truee to input that result in a sqaure
			POINT one, two, three, four;

			one.x = 0;
			one.y = 0;
			
			two.x = 0;
			two.y = 4;
			
			three.x = 4;
			three.y = 4;
			
			four.x = 4;
			four.y = 0;

			Assert::IsTrue(checkIfRectangleByPoints(one, two, three, four));
		}

		//Grae
		TEST_METHOD(GException00)
		{
			// check if gives true to input that result in a sqaure but points are inversed compared to norm
			POINT one, two, three, four;

			one.x = 0;
			one.y = 0;

			two.x = 0;
			two.y = -4;

			three.x = -4;
			three.y = -4;

			four.x = -4;
			four.y = 0;

			Assert::IsTrue(checkIfRectangleByPoints(one, two, three, four));
		}

		//Grae
		TEST_METHOD(GException01)
		{
			// check if gives true to with negitive number input that result in a sqaure
			POINT one, two, three, four;

			one.x = -1;
			one.y = -1;

			two.x = -1;
			two.y = 4;

			three.x = 4;
			three.y = 4;

			four.x = 4;
			four.y = -1;

			Assert::IsTrue(checkIfRectangleByPoints(one, two, three, four));
		}

		TEST_METHOD(GException01)
		{
			// check if gives true to with negitive number input that result in a sqaure
			POINT one, two, three, four;

			one.x = -1;
			one.y = -1;

			two.x = -1;
			two.y = 4;

			three.x = 4;
			three.y = 4;

			four.x = 4;
			four.y = -1;

			Assert::IsTrue(checkIfRectangleByPoints(one, two, three, four));
		}
	};
}
