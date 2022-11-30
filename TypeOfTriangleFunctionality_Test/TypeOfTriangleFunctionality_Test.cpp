#include "pch.h"
#include "CppUnitTest.h"

extern "C" char* analyzeTriangle(int side1, int side2, int side3);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TypeOfTriangleFunctionalityTest
{
	// test for "type of triangle" functionality if it is an Equilateral triangle
	TEST_CLASS(EquilateralFunctionalTest)
	{
	public:
		
		TEST_METHOD(Equilateral_FunctionalTest01)
		{
			// functional tests the analyzing function using 1 1 1, which should result in an "Equilateral triangle" result
			char* result = analyzeTriangle(1, 1, 1);
			Assert::AreEqual("Equilateral triangle", result);
		}

		TEST_METHOD(Equilateral_FunctionalTest02)
		{
			// functional tests the analyzing function using 1 1 1, which should result in an "Equilateral triangle" result
			char* result = analyzeTriangle(1, 1, 1);
			Assert::AreEqual("Equilateral triangle", result);
		}

		TEST_METHOD(Equilateral_BoundaryTest01)
		{
			// boundary tests the analyzing function using 2147483647 2147483647 2147483647, which should result in an "Equilateral triangle" result
			char* result = analyzeTriangle(2147483647, 2147483647, 2147483647);
			Assert::AreEqual("Equilateral triangle", result);
		}
	};

	// Functional test for "type of triangle" functionality if it is an Isosceles triangle
	TEST_CLASS(IsoscelesFunctionalTest)
	{
	public:

		TEST_METHOD(Isosceles_Test01)
		{
			// tests the analyzing function using 1 2 2, which should result in an "Isosceles triangle" result
			char* result = analyzeTriangle(1, 2, 2);
			Assert::AreEqual("Isosceles triangle", result);
		}

		TEST_METHOD(Isosceles_Test02)
		{
			// tests the analyzing function using 2 1 2, which should result in an "Isosceles triangle" result
			char* result = analyzeTriangle(2, 1, 2);
			Assert::AreEqual("Isosceles triangle", result);
		}

		TEST_METHOD(Isosceles_Test03)
		{
			// tests the analyzing function using 2 2 1, which should result in an "Isosceles triangle" result
			char* result = analyzeTriangle(2, 2, 1);
			Assert::AreEqual("Isosceles triangle", result);
		}
	};

	// Functional test for "type of triangle" functionality if it is a Scalene triangle
	TEST_CLASS(ScaleneFunctionalTest)
	{
	public:

		TEST_METHOD(Scalene_Test01)
		{
			// tests the analyzing function using 1 2 3, which should result in a "Scalene triangle" result
			char* result = analyzeTriangle(1, 2, 3);
			Assert::AreEqual("Scalene triangle", result);
		}

		TEST_METHOD(Scalene_Test02)
		{
			// tests the analyzing function using 1 2 3, which should result in a "Scalene triangle" result
			char* result = analyzeTriangle(3, 2, 1);
			Assert::AreEqual("Scalene triangle", result);
		}

		TEST_METHOD(Scalene_Test03)
		{
			// tests the analyzing function using 1 2 3, which should result in a "Scalene triangle" result
			char* result = analyzeTriangle(2, 3, 1);
			Assert::AreEqual("Scalene triangle", result);
		}
	};

	// Exception test for "type of triangle" functionality in the case input is not a triangle
	TEST_CLASS(TypeOfTriangleExceptionTest)
	{
	public:

		TEST_METHOD(Exception_Test01)
		{
			// tests the analyzing function using -1 1 1, which should result in a "Not a triangle" result
			char* result = analyzeTriangle(-1, 1, 1);
			Assert::AreEqual("Not a triangle", result);
		}
	};
}
