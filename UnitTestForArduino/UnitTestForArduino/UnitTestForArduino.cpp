
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
		
		TEST_METHOD(TestMethod1)
		{
			ExecuteSw sk;

			ExecuteHw ww;

			Result a = sk.DigitalReadCmd(5);

			Assert::AreEqual(a.functionNr, 1);
			
			Assert::AreEqual(a.pinNumber, 5);
			
			Assert::AreEqual(a.functionResult, 6);

			Result r1 = funkcija(sk);

			Result r2 = funkcija(ww);

			ExecuterGeneral ee;

			auto at0 = ee.Funkcija(sk);

			auto at1 = ee.Funkcija(ww);



			int aa = 25;



			//int sk5 = sk.Skaiciavimas5();

			//int sk8 = sk.Skaiciavimas8();

			//Assert::AreEqual(sk5, 5);

			//Assert::AreEqual(sk8, 8);

			//int aaa = funkcija(sk);

			//Assert::AreEqual(aaa, 5);

			//ExecuteHw hwww;

			//int bbb = funkcija(hwww);

			//Assert::AreEqual(bbb, 50);
		}

		Result funkcija(Interfaceee& iii)
		{
			//return iii.Skaiciavimas5();

			return iii.AnalogReadCmd(10);			
		}
	};
}
