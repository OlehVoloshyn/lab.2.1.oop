
#include "pch.h"
#include "CppUnitTest.h"
#include "../lab2.1/Fraction.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			//Fraction c;
			int d;
			Fraction a(4,2);
			d = a.Ipart();
			Assert::AreEqual(d, 2);
		}
	};
}
