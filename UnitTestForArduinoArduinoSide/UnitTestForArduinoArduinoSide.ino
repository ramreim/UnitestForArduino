
#include "D:\pc_07_1tb_ssd\programming\c_cpp_csharp\vs2022projects\ArduinoTestuBandymas001\UnitestForArduino\lib\ExecuteHw.h"
#include "D:\pc_07_1tb_ssd\programming\c_cpp_csharp\vs2022projects\ArduinoTestuBandymas001\UnitestForArduino\lib\ExecuterGeneral.h"
#include "D:\pc_07_1tb_ssd\programming\c_cpp_csharp\vs2022projects\ArduinoTestuBandymas001\UnitestForArduino\lib\Result.h"
#include "D:\pc_07_1tb_ssd\programming\c_cpp_csharp\vs2022projects\ArduinoTestuBandymas001\UnitestForArduino\lib\LedPagalLygi.h"

#include "D:\pc_07_1tb_ssd\programming\c_cpp_csharp\vs2022projects\ArduinoTestuBandymas001\UnitestForArduino\lib\ExecuteHw.cpp"
#include "D:\pc_07_1tb_ssd\programming\c_cpp_csharp\vs2022projects\ArduinoTestuBandymas001\UnitestForArduino\lib\ExecuterGeneral.cpp"
#include "D:\pc_07_1tb_ssd\programming\c_cpp_csharp\vs2022projects\ArduinoTestuBandymas001\UnitestForArduino\lib\LedPagalLygi.cpp"

#include <Arduino.h>

ExecuteHw hw;

ExecuterGeneral executerGener;

Result result;

LedPagalLygi ledpagal;

int kuris = 0;

int analogValA0 = 0;

void setup()
{
  //pinMode(2, INPUT_PULLUP);
  //pinMode(3, INPUT_PULLUP);
  //pinMode(4, INPUT_PULLUP);
  //pinMode(5, INPUT_PULLUP);
  //pinMode(6, INPUT_PULLUP);
  //pinMode(7, INPUT_PULLUP);

  //digitalWrite(2, HIGH);
  //digitalWrite(3, HIGH);
  //digitalWrite(4, HIGH);
  //digitalWrite(5, HIGH);
  //digitalWrite(6, HIGH);
  //digitalWrite(7, HIGH);


  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);

  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);

  Serial.begin(9600);
}

void loop()
{

  analogValA0 = analogRead(A0);

  kuris = ledpagal.KuriPinaIjungti(analogValA0);

  digitalWrite(kuris, HIGH);

  if (kuris != 2)
    digitalWrite(2, LOW);

  if (kuris != 3)
    digitalWrite(3, LOW);

  if (kuris != 4)
    digitalWrite(4, LOW);

  if (kuris != 5)
    digitalWrite(5, LOW);


  Serial.print("analogValA0 = " + String(analogValA0));
  Serial.print("  ");
  Serial.print("kuris = " + String(kuris));
  Serial.print("  ");
  Serial.print("\n");

  delay(200);

  //ExecuteSw sw;

  //ExecuteHw hw;

  //ExecuterGeneral executerGener;

  //Result digitalSw03Read = executerGener.DigitalReadCmdd(hw, 3);

  result = executerGener.DigitalReadCmdd(hw, 3);

  //Assert::AreEqual(digitalSw03Read.functionNr, 1);
  //Assert::AreEqual(digitalSw03Read.pinNumber, 3);
  //Assert::AreEqual(digitalSw03Read.functionResult, 4);

  //Serial.print(result.functionNr);
  //Serial.print("  ");
  //Serial.print(result.pinNumber);
  //Serial.print("  ");
  //Serial.print(result.functionResult);
  //Serial.print("  ");

  //result = executerGener.DigitalReadCmdd(hw, 4);

  //Assert::AreEqual(digitalSw03Read.functionNr, 1);
  //Assert::AreEqual(digitalSw03Read.pinNumber, 3);
  //Assert::AreEqual(digitalSw03Read.functionResult, 4);

  //Serial.print(result.functionNr);
  //Serial.print("  ");
  //Serial.print(result.pinNumber);
  //Serial.print("  ");
  //Serial.print(result.functionResult);
  //Serial.print("  ");

  //result = executerGener.DigitalReadCmdd(hw, 5);

  //Assert::AreEqual(digitalSw03Read.functionNr, 1);
  //Assert::AreEqual(digitalSw03Read.pinNumber, 3);
  //Assert::AreEqual(digitalSw03Read.functionResult, 4);

  //Serial.print(result.functionNr);
  //Serial.print("  ");
  //Serial.print(result.pinNumber);
  //Serial.print("  ");
  //Serial.print(result.functionResult);
  //Serial.print("  ");

  //Serial.print("\n");

  //delay(1000);



}
