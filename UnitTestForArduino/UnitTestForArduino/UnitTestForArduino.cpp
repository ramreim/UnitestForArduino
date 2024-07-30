
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
			ExecuteSw sw;

			ExecuteHw hw;

			ExecuterGeneral executerGener;

			Result digitalSw03Read = executerGener.DigitalReadCmdd(sw, 3);

			Assert::AreEqual(digitalSw03Read.functionNr, 1);
			Assert::AreEqual(digitalSw03Read.pinNumber, 3);
			Assert::AreEqual(digitalSw03Read.functionResult, 4);

			Result digitalSw05Read = executerGener.DigitalReadCmdd(hw, 5);

			Assert::AreEqual(digitalSw05Read.functionNr, 1);
			Assert::AreEqual(digitalSw05Read.pinNumber, 5);
			Assert::AreEqual(digitalSw05Read.functionResult, 6);
		}

		TEST_METHOD(DigitalWrite_sw_10_hw_12)
		{
			ExecuteSw sw;

			ExecuteHw hw;

			ExecuterGeneral executerGener;

			Result digitalSw10WriteHIGH = executerGener.DigitalWriteCmdd(sw, 10, 1);

			Assert::AreEqual(digitalSw10WriteHIGH.functionNr, 2);
			Assert::AreEqual(digitalSw10WriteHIGH.pinNumber, 10);
			Assert::AreEqual(digitalSw10WriteHIGH.functionResult, 1);

			Result digitalSw10WriteLOW = executerGener.DigitalWriteCmdd(sw, 10, 0);

			Assert::AreEqual(digitalSw10WriteLOW.functionNr, 2);
			Assert::AreEqual(digitalSw10WriteLOW.pinNumber, 10);
			Assert::AreEqual(digitalSw10WriteLOW.functionResult, 0);

			Result digitalHw11WriteHIGH = executerGener.DigitalWriteCmdd(hw, 11, 1);

			Assert::AreEqual(digitalHw11WriteHIGH.functionNr, 2);
			Assert::AreEqual(digitalHw11WriteHIGH.pinNumber, 11);
			Assert::AreEqual(digitalHw11WriteHIGH.functionResult, 14);

			Result digitalHw111WriteLOW = executerGener.DigitalWriteCmdd(hw, 11, 0);

			Assert::AreEqual(digitalHw111WriteLOW.functionNr, 2);
			Assert::AreEqual(digitalHw111WriteLOW.pinNumber, 11);
			Assert::AreEqual(digitalHw111WriteLOW.functionResult, 13);
		}
	};
}
