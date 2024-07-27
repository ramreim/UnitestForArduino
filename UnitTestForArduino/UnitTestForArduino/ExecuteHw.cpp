#include "ExecuteHw.h"

#include "Result.h"

Result ExecuteHw::DigitalReadCmd(int pin)
{
	result.pinNumber = pin;
	result.functionNr = 1;
	//result.functionResult = digitalRead(pin);
	return result;
}

Result ExecuteHw::DigitalWriteCmd(int pin, int val)
{
	result.pinNumber = pin;
	result.functionNr = 1;
	//digitalWrite(pin, val);
	result.functionResult = val;
	return result;
}

Result ExecuteHw::AnalogReadCmd(int pin)
{
	result.pinNumber = pin;
	result.functionNr = 1;
	//result.functionResult = analogRead(pin);
	return result;
}

Result ExecuteHw::AnalogWriteCmd(int pin, int val)
{
	result.pinNumber = pin;
	result.functionNr = 4;
	//analogWrite(pin, val);
	result.functionResult = val;
	return result;
}
