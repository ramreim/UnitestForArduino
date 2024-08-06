#include "ExecuterGeneral.h"

#include "Result.h"

#include "IExecute.h"

Result ExecuterGeneral::DigitalReadCmdd(IExecute& ExecuteGeneral, int pin)
{
	return ExecuteGeneral.DigitalReadCmd(pin);
}

Result ExecuterGeneral::AnalogReadCmdd(IExecute& ExecuteGeneral, int pin)
{
	return ExecuteGeneral.AnalogReadCmd(pin);
}

Result ExecuterGeneral::DigitalWriteCmdd(IExecute& ExecuteGeneral, int pin, int val)
{
	return ExecuteGeneral.DigitalWriteCmd(pin, val);
}

Result ExecuterGeneral::AnalogWriteCmdd(IExecute& ExecuteGeneral, int pin, int val)
{
	return ExecuteGeneral.AnalogWriteCmd(pin, val);
}


