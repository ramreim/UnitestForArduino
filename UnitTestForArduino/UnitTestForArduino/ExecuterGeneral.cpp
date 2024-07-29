#include "ExecuterGeneral.h"

#include "Result.h"

#include "Interfaceee.h"




Result ExecuterGeneral::AnalogReadCmdd(Interfaceee& IExecuterGeneral, int pin)
{
	//return iii.Skaiciavimas5();

	return IExecuterGeneral.AnalogReadCmd(pin);
}


