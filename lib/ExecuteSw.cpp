//#include "D:\pc_07_1tb_ssd\programming\c_cpp_csharp\vs2022projects\ArduinoTestuBandymas001\UnitestForArduino\lib\ExecuteSw.h"

//#include "D:\pc_07_1tb_ssd\programming\c_cpp_csharp\vs2022projects\ArduinoTestuBandymas001\UnitestForArduino\lib\Result.h"

#include "ExecuteSw.h"

#include "Result.h"

Result ExecuteSw::DigitalReadCmd(int pin)
{
	result.pinNumber = pin;
	result.functionNr = 1;
	result.functionResult = pin + result.functionNr;
	//result.functionResult = digitalRead(pin);
	return result;
}

Result ExecuteSw::DigitalWriteCmd(int pin, int val)
{
	result.pinNumber = pin;
	result.functionNr = 2;
	result.functionResult = pin + result.functionNr + val;
	//digitalWrite(pin, val);
	//result.functionResult = val;
	return result;
}

Result ExecuteSw::AnalogReadCmd(int pin)
{
	result.pinNumber = pin;
	result.functionNr = 3;
	result.functionResult = pin + result.functionNr;
	//result.functionResult = analogRead(pin);
	return result;
}

Result ExecuteSw::AnalogWriteCmd(int pin, int val)
{
	result.pinNumber = pin;
	result.functionNr = 4;
	result.functionResult = pin + result.functionNr + val;
	//analogWrite(pin, val);
	//result.functionResult = val;
	return result;
}
