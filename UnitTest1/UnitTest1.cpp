#include "pch.h"
#include "CppUnitTest.h"
#include "../pr5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double a = S0(16);
			Assert::AreEqual(a, 0.5);
		}
	};
}
