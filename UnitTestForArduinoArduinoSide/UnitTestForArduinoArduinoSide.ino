//#include "ExecuteSw.h"
#include "ExecuteHw.h"
#include "ExecuterGeneral.h"
#include "Result.h"

//#include "D:\pc_07_1tb_ssd\programming\c_cpp_csharp\vs2022projects\ArduinoTestuBandymas001\UnitestForArduino\UnitTestForArduino\UnitTestForArduino\ExecuteHw.h"
//#include "D:\pc_07_1tb_ssd\programming\c_cpp_csharp\vs2022projects\ArduinoTestuBandymas001\UnitestForArduino\UnitTestForArduino\UnitTestForArduino\ExecuterGeneral.h"
//#include "D:\pc_07_1tb_ssd\programming\c_cpp_csharp\vs2022projects\ArduinoTestuBandymas001\UnitestForArduino\UnitTestForArduino\UnitTestForArduino\Result.h"


#include <Arduino.h>

ExecuteHw hw;

ExecuterGeneral executerGener;

Result result;


void setup()
{

  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);

  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);


  Serial.begin(9600);

}

void loop()
{

  //ExecuteSw sw;

  //ExecuteHw hw;

  //ExecuterGeneral executerGener;

  //Result digitalSw03Read = executerGener.DigitalReadCmdd(hw, 3);

  result = executerGener.DigitalReadCmdd(hw, 3);

  //Assert::AreEqual(digitalSw03Read.functionNr, 1);
  //Assert::AreEqual(digitalSw03Read.pinNumber, 3);
  //Assert::AreEqual(digitalSw03Read.functionResult, 4);

  Serial.print(result.functionNr);
  Serial.print("  ");
  Serial.print(result.pinNumber);
  Serial.print("  ");
  Serial.print(result.functionResult);
  Serial.print("  ");

  result = executerGener.DigitalReadCmdd(hw, 4);

  //Assert::AreEqual(digitalSw03Read.functionNr, 1);
  //Assert::AreEqual(digitalSw03Read.pinNumber, 3);
  //Assert::AreEqual(digitalSw03Read.functionResult, 4);

  Serial.print(result.functionNr);
  Serial.print("  ");
  Serial.print(result.pinNumber);
  Serial.print("  ");
  Serial.print(result.functionResult);
  Serial.print("  ");

  result = executerGener.DigitalReadCmdd(hw, 5);

  //Assert::AreEqual(digitalSw03Read.functionNr, 1);
  //Assert::AreEqual(digitalSw03Read.pinNumber, 3);
  //Assert::AreEqual(digitalSw03Read.functionResult, 4);

  Serial.print(result.functionNr);
  Serial.print("  ");
  Serial.print(result.pinNumber);
  Serial.print("  ");
  Serial.print(result.functionResult);
  Serial.print("  ");

  Serial.print("\n");

  delay(1000);



}
