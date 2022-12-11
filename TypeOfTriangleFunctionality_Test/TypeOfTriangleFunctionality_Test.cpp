#include "pch.h"
#include "CppUnitTest.h"

extern "C" char* analyzeTriangle(int side1, int side2, int side3);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TypeOfTriangleFunctionalityTest
{
	// test for "type of triangle" functionality if it is an Equilateral triangle
	TEST_CLASS(EquilateralTests)
	{
	public:
		
		// Nicolas
		TEST_METHOD(Equilateral_FunctionalTest01)
		{
			// functional test for the analyzing function using 1 1 1, which should result in an "Equilateral triangle" result
			char* result = analyzeTriangle(1, 1, 1);
			Assert::AreEqual("Equilateral triangle", result);
		}

		// Nicolas
		TEST_METHOD(Equilateral_FunctionalTest02)
		{
			// functional test for the analyzing function using 231 231 231, which should result in an "Equilateral triangle" result
			char* result = analyzeTriangle(231, 231, 231);
			Assert::AreEqual("Equilateral triangle", result);
		}

		// Nicolas
		TEST_METHOD(Equilateral_BoundaryTest01)
		{
			// boundary test for the analyzing function using 2147483647 2147483647 2147483647, which should result in an "Equilateral triangle" result
			char* result = analyzeTriangle(2147483647, 2147483647, 2147483647);
			Assert::AreEqual("Equilateral triangle", result);
		}
	};

	// tests for "type of triangle" functionality if it is an Isosceles triangle
	TEST_CLASS(IsoscelesFunctionalTest)
	{
	public:

		// Nicolas
		TEST_METHOD(Isosceles_Test01)
		{
			// functional test for the analyzing function using 1 2 2, which should result in an "Isosceles triangle" result
			char* result = analyzeTriangle(1, 2, 2);
			Assert::AreEqual("Isosceles triangle", result);
		}

		// Nicolas
		TEST_METHOD(Isosceles_Test02)
		{
			// functional test for the analyzing function using 100 5 100, which should result in an "Isosceles triangle" result
			char* result = analyzeTriangle(100, 5, 100);
			Assert::AreEqual("Isosceles triangle", result);
		}

		// Nicolas
		TEST_METHOD(Isosceles_Test03)
		{
			// functional test for the analyzing function using 3627 10000 3627, which should result in an "Isosceles triangle" result
			char* result = analyzeTriangle(3627, 10000, 3627);
			Assert::AreEqual("Isosceles triangle", result);
		}
	};

	// Functional test for "type of triangle" functionality if it is a Scalene triangle
	TEST_CLASS(ScaleneFunctionalTest)
	{
	public:

		// Nicolas
		TEST_METHOD(Scalene_Test01)
		{
			// functional test for the analyzing function using 1 2 3, which should result in a "Scalene triangle" result
			char* result = analyzeTriangle(1, 2, 3);
			Assert::AreEqual("Scalene triangle", result);
		}

		// Nicolas
		TEST_METHOD(Scalene_Test02)
		{
			// functional test for the analyzing function using 19023 123 25, which should result in a "Scalene triangle" result
			char* result = analyzeTriangle(19023, 123, 25);
			Assert::AreEqual("Scalene triangle", result);
		}

		// Nicolas
		TEST_METHOD(Scalene_Test03)
		{
			// functional test for the analyzing function using 93032 2147483647 5, which should result in a "Scalene triangle" result
			char* result = analyzeTriangle(93032, 2147483647, 5);
			Assert::AreEqual("Scalene triangle", result);
		}
	};

	// Exception test for "type of triangle" functionality in the case input is not a triangle
	TEST_CLASS(ExceptionTest)
	{
	public:

		// Nicolas
		TEST_METHOD(Exception_Test01)
		{
			// Exception test for the analyzing function using -1 1 1, which should result in a "Not a triangle" result
			char* result = analyzeTriangle(-1, 1, 1);
			Assert::AreEqual("Not a triangle", result);
		}

		// Nicolas
		TEST_METHOD(Exception_Test02)
		{
			// Exception test for the analyzing function using 1 2147483648 1, which should result in a "Not a triangle" result
			char* result = analyzeTriangle(1, 2147483648, 1);
			Assert::AreEqual("Not a triangle", result);
		}
	};

	TEST_CLASS(TypeOfTriangleFunctionality_Test)
	{

		//Grae
		TEST_METHOD(GFunctional00)
		{
			// check if result = expected to input that result in "Equilateral triangle"
			char* result = analyzeTriangle(2, 2, 2);
			Assert::AreEqual("Equilateral triangle", result);
		}

		//Grae
		TEST_METHOD(GFunctional01)
		{
			// check if result = expected to input with negitive in slot 0 that result in "Not a triangle"
			char* result = analyzeTriangle(-2, 2, 2);
			Assert::AreEqual("Not a triangle", result);
		}

		//Grae
		TEST_METHOD(GFunctional03)
		{
			// check if result = expected to input with negitive in slot 1 that result in "Not a triangle"
			char* result = analyzeTriangle(2, -2, 2);
			Assert::AreEqual("Not a triangle", result);
		}

		//Grae
		TEST_METHOD(GFunctional04)
		{
			// check if result = expected to input with negitive in slot 2 that result in "Not a triangle"
			char* result = analyzeTriangle(2, 2, -2);
			Assert::AreEqual("Not a triangle", result);
		}

		//Grae
		TEST_METHOD(GFunctional05)
		{
			// check if result = expected to input that result in "Isosceles triangle"
			char* result = analyzeTriangle(1, 2, 2);
			Assert::AreEqual("Isosceles triangle", result);
		}

		//Grae
		TEST_METHOD(GFunctional06)
		{
			// check if result = expected to input that result in "Isosceles triangle"
			char* result = analyzeTriangle(2, 1, 2);
			Assert::AreEqual("Isosceles triangle", result);
		}

		//Grae
		TEST_METHOD(GFunctional07)
		{
			// check if result = expected to input that result in "Isosceles triangle"
			char* result = analyzeTriangle(2, 2, 1);
			Assert::AreEqual("Isosceles triangle", result);
		}

		//Grae
		TEST_METHOD(GFunctional07)
		{
			// check if result = expected to input that result in "Scalene triangle"
			char* result = analyzeTriangle(3, 2, 1);
			Assert::AreEqual("Scalene triangle", result);
		}

		//Grae
		TEST_METHOD(GFunctional07)
		{
			// check if result = expected to input that result in "Scalene triangle"
			char* result = analyzeTriangle(1, 2, 3);
			Assert::AreEqual("Scalene triangle", result);
		}

		//Grae
		TEST_METHOD(GFunctional07)
		{
			// check if result = expected to input that result in "Scalene triangle"
			char* result = analyzeTriangle(2, 3, 1);
			Assert::AreEqual("Scalene triangle", result);
		}

		//Grae
		TEST_METHOD(GBoundary00)
		{
			// check if result = expected to input with 0 in slot 0 that result in "Not a triangle"
			char* result = analyzeTriangle(0, 2, 2);
			Assert::AreEqual("Not a triangle", result);
		}

		//Grae
		TEST_METHOD(GBoundary01)
		{
			// check if result = expected to input with 0 in slot 1 that result in "Not a triangle"
			char* result = analyzeTriangle(2, 0, 2);
			Assert::AreEqual("Not a triangle", result);
		}

		//Grae
		TEST_METHOD(GBoundary02)
		{
			// check if result = expected to input with 0 in slot 2 that result in "Not a triangle"
			char* result = analyzeTriangle(2, 2, 0);
			Assert::AreEqual("Not a triangle", result);
		}
	};
}

