#include "ExecuteHw.h"

#include "Result.h"

#include "Arduino.h"

Result ExecuteHw::DigitalReadCmd(int pin)
{
	result.pinNumber = pin;
	result.functionNr = 1;	
	//result.functionResult = pin + result.functionNr;
	result.functionResult = digitalRead(pin);
	return result;
}

Result ExecuteHw::DigitalWriteCmd(int pin, int val)
{
	result.pinNumber = pin;
	result.functionNr = 2;
	//result.functionResult = pin + result.functionNr + val;
	digitalWrite(pin, val);	
	return result;
}

Result ExecuteHw::AnalogReadCmd(int pin)
{
	result.pinNumber = pin;
	result.functionNr = 3;
	//result.functionResult = pin + result.functionNr;
	result.functionResult = analogRead(pin);
	return result;
}

Result ExecuteHw::AnalogWriteCmd(int pin, int val)
{
	result.pinNumber = pin;
	result.functionNr = 4;
	//result.functionResult = pin + result.functionNr + val;
	analogWrite(pin, val);
	return result;
}
