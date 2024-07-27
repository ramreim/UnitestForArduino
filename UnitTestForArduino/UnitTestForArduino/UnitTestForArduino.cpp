
#include "CppUnitTest.h"
#include "ExecuteSw.h"
#include "ExecuteHw.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestForArduino
{
	TEST_CLASS(UnitTestForArduino)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ExecuteSw sk;

			int sk5 = sk.Skaiciavimas5();

			int sk8 = sk.Skaiciavimas8();

			Assert::AreEqual(sk5, 5);

			Assert::AreEqual(sk8, 8);

			int aaa = funkcija(sk);

			Assert::AreEqual(aaa, 5);

			ExecuteHw hww;

			int bbb = funkcija(hww);

			Assert::AreEqual(bbb, 50);
		}

		int funkcija(Interfaceee& iii)
		{
			return iii.Skaiciavimas5();		
		}
	};
}
