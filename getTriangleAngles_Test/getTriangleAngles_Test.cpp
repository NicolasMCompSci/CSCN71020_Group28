#include "pch.h"
#include "CppUnitTest.h"

extern "C" void assignTriangleAngles(int triangleSides[], double triangleAngles[]);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

#define NUMOFTRIANGLESIDES 3

namespace getTriangleAnglesTest
{
	// tests class for the "triangle inside angle" functionality
	TEST_CLASS(getTriangleAnglesTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int triS[NUMOFTRIANGLESIDES] = {1, 1, 1};

			double triA[NUMOFTRIANGLESIDES];

			assignTriangleAngles(triS, triA);

			//if (triA[0] = 60)

			double buffer = triA[0];

			Assert::AreEqual(buffer, 60);
		}

		// Nicolas
		TEST_METHOD(IsoscelesAngleTest01)
		{
			// Tests the triangle angle functionality if the triangle is an Isosceles triangle
			int triangleSides[NUMOFTRIANGLESIDES] = { 1, 2, 2 };

			double actualAngles[NUMOFTRIANGLESIDES];
			assignTriangleAngles(triangleSides, actualAngles);
			double expectedAngles[3] = { 28.955024371857938, 75.522487814065101, 75.5224878140651 };

			Assert::AreEqual(actualAngles[0], expectedAngles[0]);
			Assert::AreEqual(actualAngles[1], expectedAngles[1]);
			Assert::AreEqual(actualAngles[2], expectedAngles[2]);
		}

		// Nicolas
		TEST_METHOD(ScaleneTest01)
		{
			// Tests the triangle angle functionality if the triangle is a Scalene triangle
			int triangleSides[NUMOFTRIANGLESIDES] = { 4, 5, 6 };

			double actualAngles[NUMOFTRIANGLESIDES];
			assignTriangleAngles(triangleSides, actualAngles);
			double expectedAngles[3] = { 41.409622109268142, 82.819244218536255, 55.771133672183751 };

			Assert::AreEqual(actualAngles[0], expectedAngles[0]);
			Assert::AreEqual(actualAngles[1], expectedAngles[1]);
			Assert::AreEqual(actualAngles[2], expectedAngles[2]);
		}
	};
}
