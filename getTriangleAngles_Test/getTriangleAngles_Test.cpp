#include "pch.h"
#include "CppUnitTest.h"

extern "C" void assignTriangleAngles(int triangleSides[], double triangleAngles[]);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

#define NUMOFTRIANGLESIDES 3

namespace getTriangleAnglesTest
{
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
	};
}
