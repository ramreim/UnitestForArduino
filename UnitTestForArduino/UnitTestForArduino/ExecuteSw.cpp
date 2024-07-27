#include "ExecuteSw.h"

#include "Result.h"

Result ExecuteSw::DigitalReadCmd(int pin)
{
	result.pinNumber = pin;
	result.functionNr = 1;
	//result.functionResult = digitalRead(pin);
	return result;
}

Result ExecuteSw::DigitalWriteCmd(int pin, int val)
{
	result.pinNumber = pin;
	result.functionNr = 1;
	//digitalWrite(pin, val);
	result.functionResult = val;
	return result;
}

Result ExecuteSw::AnalogReadCmd(int pin)
{
	result.pinNumber = pin;
	result.functionNr = 1;
	//result.functionResult = analogRead(pin);
	return result;
}

Result ExecuteSw::AnalogWriteCmd(int pin, int val)
{
	result.pinNumber = pin;
	result.functionNr = 4;
	//analogWrite(pin, val);
	result.functionResult = val;
	return result;
}
