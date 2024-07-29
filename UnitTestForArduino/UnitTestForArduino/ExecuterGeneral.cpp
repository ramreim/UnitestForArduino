#include "ExecuterGeneral.h"

#include "Result.h"

#include "Interfaceee.h"




Result ExecuterGeneral::Funkcija(Interfaceee& iii)
{
	//return iii.Skaiciavimas5();

	return iii.AnalogReadCmd(10);
}


