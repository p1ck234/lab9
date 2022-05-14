#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\danil\source\repos\lab9\lab9\lab9.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int arr[10]{ 56,34355,345,345,34534,5346,8,5465,113,119986 };
			Microsoft::VisualStudio::CppUnitTestFramework::Assert::AreEqual(func(10, arr), 1);
		}
	};
}
