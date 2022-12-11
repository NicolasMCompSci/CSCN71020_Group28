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
		
		// Grae
		TEST_METHOD(GFunctional00)
		{
			int triS[NUMOFTRIANGLESIDES] = {1, 1, 1};

			double triA[NUMOFTRIANGLESIDES];

			double expectedAngles[3] = { 60.000000000000000, 60.000000000000000, 60.000000000000000 };

			assignTriangleAngles(triS, triA);

			Assert::AreEqual(triA[0], expectedAngles[0]);
			Assert::AreEqual(triA[1], expectedAngles[1]);
			Assert::AreEqual(triA[2], expectedAngles[2]);
		}

		// Grae
		TEST_METHOD(GFunctional01)
		{
			int triS[NUMOFTRIANGLESIDES] = { 2, 4, 4 };

			double triA[NUMOFTRIANGLESIDES];

			double expectedAngles[3] = { 28.955024371857938, 75.522487814065101, 75.5224878140651 };

			assignTriangleAngles(triS, triA);

			Assert::AreEqual(triA[0], expectedAngles[0]);
			Assert::AreEqual(triA[1], expectedAngles[1]);
			Assert::AreEqual(triA[2], expectedAngles[2]);
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
