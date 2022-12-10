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
			int triangleSides[NUMOFTRIANGLESIDES] = {1, 1, 1};

			double triangleAngles[NUMOFTRIANGLESIDES];
		}
	};
}
