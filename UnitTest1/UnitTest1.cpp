#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\danil\source\repos\lab9\lab9\lab9.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
	TEST_CLASS(Tests)
	{
	public:

		TEST_METHOD(Normal_Input) // Ќормальный набор
		{
			int arr[10]{ 56,34355,345,345,34534,5346,8,5465,113,119986 };
			Microsoft::VisualStudio::CppUnitTestFramework::Assert::AreEqual(func(10, arr), 1);
		}
		TEST_METHOD(Null_Input) // Ќулевой набор 
		{
			int arr[1]{ };
			Microsoft::VisualStudio::CppUnitTestFramework::Assert::AreEqual(func(1, arr), 0);
		}
		TEST_METHOD(One_Input) // ≈диничный набор 
		{
			int arr[1]{ 1 };
			Microsoft::VisualStudio::CppUnitTestFramework::Assert::AreEqual(func(1, arr), 0);
		}
		TEST_METHOD(Repeat_Number_Input) // Ќабор с повтор€ющимис€ элементами 
		{
			int arr[5]{ 11,23,10,1,1 };
			Microsoft::VisualStudio::CppUnitTestFramework::Assert::AreEqual(func(5, arr), 0);
		}
		TEST_METHOD(Otr_Number_Input) // Ќабор с отрицательными элементами 
		{
			int arr[5]{ 11,-3,10,33,-1 };
			Microsoft::VisualStudio::CppUnitTestFramework::Assert::AreEqual(func(5, arr), 0);
		}
		TEST_METHOD(Otr_Repeat_Number_Input) // Ќабор с повтор€ющимис€ отрицательными элементами 
		{
			int arr[10]{ 434,6554,5445,11,-1,10,33,-1,353,4344 };
			Microsoft::VisualStudio::CppUnitTestFramework::Assert::AreEqual(func(10, arr), 9);
		}
		TEST_METHOD(Ectrem_Input_Begin) // Ёкстремальное значение находитьс€ в начале 
		{
			int arr[10]{ 9,6554,5445,11,15,10,33,10,353 };
			Microsoft::VisualStudio::CppUnitTestFramework::Assert::AreEqual(func(10, arr), 1);
		}
		TEST_METHOD(Ectrem_Input_Center) // Ёкстремальное значение находитьс€ в центре 
		{
			int arr[10]{ 115653,6554,5445,9,15,10,33,10,353 };
			Microsoft::VisualStudio::CppUnitTestFramework::Assert::AreEqual(func(10, arr), 0);
		}
		TEST_METHOD(Ectrem_Input_End) // Ёкстремальное значение находитьс€ в конце 
		{
			int arr[10]{ 643,654,654,363,150,643,643,104,9 };
			Microsoft::VisualStudio::CppUnitTestFramework::Assert::AreEqual(func(10, arr), 3);
		}
		TEST_METHOD(Ectrem_Repeat_Input) // Ёкстремальное значени€ повтор€ютс€ 
		{
			int arr[10]{ 9,9,543,545,150,643,643,104,103 };
			Microsoft::VisualStudio::CppUnitTestFramework::Assert::AreEqual(func(10, arr), 3);
		}
	};
}
