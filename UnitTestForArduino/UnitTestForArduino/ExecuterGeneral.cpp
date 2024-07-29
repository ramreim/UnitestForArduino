#include "ExecuterGeneral.h"

#include "Result.h"

#include "Interfaceee.h"

Result ExecuterGeneral::DigitalReadCmdd(Interfaceee& IExecuterGeneral, int pin)
{
	return IExecuterGeneral.DigitalReadCmd(pin);
}

Result ExecuterGeneral::AnalogReadCmdd(Interfaceee& IExecuterGeneral, int pin)
{
	return IExecuterGeneral.AnalogReadCmd(pin);
}

Result ExecuterGeneral::DigitalWriteCmdd(Interfaceee& IExecuterGeneral, int pin, int val)
{
	return IExecuterGeneral.DigitalWriteCmd(pin, val);
}

Result ExecuterGeneral::AnalogWriteCmdd(Interfaceee& IExecuterGeneral, int pin, int val)
{
	return IExecuterGeneral.AnalogWriteCmd(pin, val);
}


