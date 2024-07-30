
#include "CppUnitTest.h"
#include "ExecuteSw.h"
#include "ExecuteHw.h"
#include "ExecuterGeneral.h"
#include "Result.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestForArduino
{
	TEST_CLASS(UnitTestForArduino)
	{
	public:
		
		TEST_METHOD(AnalogRead_sw_02_hw_04)
		{
			ExecuteSw sw;

			ExecuteHw hw;

			ExecuterGeneral executerGener;

			Result analogSw02 = executerGener.AnalogReadCmdd(sw, 2);

			Assert::AreEqual(analogSw02.functionNr, 3);
			Assert::AreEqual(analogSw02.pinNumber, 2);
			Assert::AreEqual(analogSw02.functionResult, 5);

			Result analogHw02 = executerGener.AnalogReadCmdd(hw, 4);

			Assert::AreEqual(analogHw02.functionNr, 3);
			Assert::AreEqual(analogHw02.pinNumber, 4);
			Assert::AreEqual(analogHw02.functionResult, 7);
		}

		TEST_METHOD(DigitalRead_sw_03_hw_05)
		{

		}
	};
}
