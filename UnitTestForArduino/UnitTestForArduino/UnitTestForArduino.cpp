
#include "CppUnitTest.h"
//#include "ExecuteSw.h"
//#include "ExecuteHw.h"
//#include "ExecuterGeneral.h"
//#include "Result.h"
//#include "LedPagalLygi.h"


#include "D:\pc_07_1tb_ssd\programming\c_cpp_csharp\vs2022projects\ArduinoTestuBandymas001\UnitestForArduino\lib\ExecuteSw.h"
#include "D:\pc_07_1tb_ssd\programming\c_cpp_csharp\vs2022projects\ArduinoTestuBandymas001\UnitestForArduino\lib\ExecuterGeneral.h"
#include "D:\pc_07_1tb_ssd\programming\c_cpp_csharp\vs2022projects\ArduinoTestuBandymas001\UnitestForArduino\lib\Result.h"
#include "D:\pc_07_1tb_ssd\programming\c_cpp_csharp\vs2022projects\ArduinoTestuBandymas001\UnitestForArduino\lib\LedPagalLygi.h"

#include "D:\pc_07_1tb_ssd\programming\c_cpp_csharp\vs2022projects\ArduinoTestuBandymas001\UnitestForArduino\lib\ExecuteSw.cpp"
#include "D:\pc_07_1tb_ssd\programming\c_cpp_csharp\vs2022projects\ArduinoTestuBandymas001\UnitestForArduino\lib\ExecuterGeneral.cpp"
#include "D:\pc_07_1tb_ssd\programming\c_cpp_csharp\vs2022projects\ArduinoTestuBandymas001\UnitestForArduino\lib\LedPagalLygi.cpp"







using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestForArduino
{
	TEST_CLASS(UnitTestForArduino)
	{
	public:

		TEST_METHOD(DigitalRead_sw_03_hw_05)
		{
			ExecuteSw sw;

			//ExecuteHw hw;

			ExecuterGeneral executerGener;

			Result digitalSw03Read = executerGener.DigitalReadCmdd(sw, 3);

			Assert::AreEqual(digitalSw03Read.functionNr, 1);
			Assert::AreEqual(digitalSw03Read.pinNumber, 3);
			Assert::AreEqual(digitalSw03Read.functionResult, 4);

			//Result digitalSw05Read = executerGener.DigitalReadCmdd(hw, 5);

			//Assert::AreEqual(digitalSw05Read.functionNr, 1);
			//Assert::AreEqual(digitalSw05Read.pinNumber, 5);
			//Assert::AreEqual(digitalSw05Read.functionResult, 6);
		}

		TEST_METHOD(DigitalWrite_sw_10_hw_12)
		{
			ExecuteSw sw;

			//ExecuteHw hw;

			ExecuterGeneral executerGener;

			Result digitalSw10WriteHIGH = executerGener.DigitalWriteCmdd(sw, 10, 1);

			Assert::AreEqual(digitalSw10WriteHIGH.functionNr, 2);
			Assert::AreEqual(digitalSw10WriteHIGH.pinNumber, 10);
			Assert::AreEqual(digitalSw10WriteHIGH.functionResult, 13);

			Result digitalSw10WriteLOW = executerGener.DigitalWriteCmdd(sw, 10, 0);

			Assert::AreEqual(digitalSw10WriteLOW.functionNr, 2);
			Assert::AreEqual(digitalSw10WriteLOW.pinNumber, 10);
			Assert::AreEqual(digitalSw10WriteLOW.functionResult, 12);

			//Result digitalHw11WriteHIGH = executerGener.DigitalWriteCmdd(hw, 11, 1);

			//Assert::AreEqual(digitalHw11WriteHIGH.functionNr, 2);
			//Assert::AreEqual(digitalHw11WriteHIGH.pinNumber, 11);
			//Assert::AreEqual(digitalHw11WriteHIGH.functionResult, 14);

			//Result digitalHw111WriteLOW = executerGener.DigitalWriteCmdd(hw, 11, 0);

			//Assert::AreEqual(digitalHw111WriteLOW.functionNr, 2);
			//Assert::AreEqual(digitalHw111WriteLOW.pinNumber, 11);
			//Assert::AreEqual(digitalHw111WriteLOW.functionResult, 13);
		}

		TEST_METHOD(AnalogRead_sw_02_hw_04)
		{
			ExecuteSw sw;

			//ExecuteHw hw;

			ExecuterGeneral executerGener;

			Result analogSw02 = executerGener.AnalogReadCmdd(sw, 2);

			Assert::AreEqual(analogSw02.functionNr, 3);
			Assert::AreEqual(analogSw02.pinNumber, 2);
			Assert::AreEqual(analogSw02.functionResult, 5);

			//Result analogHw02 = executerGener.AnalogReadCmdd(hw, 4);

			//Assert::AreEqual(analogHw02.functionNr, 3);
			//Assert::AreEqual(analogHw02.pinNumber, 4);
			//Assert::AreEqual(analogHw02.functionResult, 7);
		}

		TEST_METHOD(AnalogWrite_sw_03_hw_05)
		{
			ExecuteSw sw;

			//ExecuteHw hw;

			ExecuterGeneral executerGener;

			Result analogSw3Write30 = executerGener.AnalogWriteCmdd(sw, 3, 30);

			Assert::AreEqual(analogSw3Write30.functionNr, 4);
			Assert::AreEqual(analogSw3Write30.pinNumber, 3);
			Assert::AreEqual(analogSw3Write30.functionResult, 37);

			Result analogSw3Write40 = executerGener.AnalogWriteCmdd(sw, 3, 40);

			Assert::AreEqual(analogSw3Write40.functionNr, 4);
			Assert::AreEqual(analogSw3Write40.pinNumber, 3);
			Assert::AreEqual(analogSw3Write40.functionResult, 47);

			//Result analogSw5Write150 = executerGener.AnalogWriteCmdd(hw, 5, 150);

			//Assert::AreEqual(analogSw5Write150.functionNr, 4);
			//Assert::AreEqual(analogSw5Write150.pinNumber, 5);
			//Assert::AreEqual(analogSw5Write150.functionResult, 159);

			//Result analogSw5Write180 = executerGener.AnalogWriteCmdd(hw, 5, 180);

			//Assert::AreEqual(analogSw5Write180.functionNr, 4);
			//Assert::AreEqual(analogSw5Write180.pinNumber, 5);
			//Assert::AreEqual(analogSw5Write180.functionResult, 189);
		}


		TEST_METHOD(LedPagalLy00gi001)
		{
			ExecuteSw sw;

			//ExecuteHw hw;

			ExecuterGeneral executerGener;

			LedPagalLygi ledIjungimasPagalLygi;

			//Result ress;

			int l010 = ledIjungimasPagalLygi.KuriPinaIjungti(30);

			int l030 = ledIjungimasPagalLygi.KuriPinaIjungti(30);

			int l060 = ledIjungimasPagalLygi.KuriPinaIjungti(60);

			int l120 = ledIjungimasPagalLygi.KuriPinaIjungti(120);

			int l200 = ledIjungimasPagalLygi.KuriPinaIjungti(200);

			int l220 = ledIjungimasPagalLygi.KuriPinaIjungti(220);

			Assert::AreEqual(l010, 2);

			Assert::AreEqual(l030, 2);

			Assert::AreEqual(l060, 3);

			Assert::AreEqual(l120, 4);

			Assert::AreEqual(l200, 5);

			Assert::AreEqual(l220, 5);
		};
	};
}
