#include "pch.h"
#include "CppUnitTest.h"
#include "..\lab-6.2(it)\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[4] = { 1, 2, 3, 4 };
			int min = Min(a, 4);
			Assert::AreEqual(1, min);

		}
	};
}
