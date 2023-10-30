#include "pch.h"
#include "CppUnitTest.h"
#include "../Pr_6.1/6.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int size = 6;
			int arr[size] = { 1, -2, 3, 4, -5, 6 };

			int count = NUMEROSITY(arr, size);
		}
	};
}
