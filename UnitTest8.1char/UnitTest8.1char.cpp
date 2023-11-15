#include "pch.h"
#include "CppUnitTest.h"
#include "../lab8.1char/lab8.1char.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81char
{
	TEST_CLASS(UnitTest81char)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[] = { ".s..g." };
			int test = FindFourthDot(str);
			Assert::AreEqual(0, test);
		}
	};
}
