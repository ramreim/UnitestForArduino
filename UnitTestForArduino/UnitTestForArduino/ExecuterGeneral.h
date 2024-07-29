#ifndef EXECUTER_GENERAL_H
#define EXECUTER_GENERAL_H
#include "Result.h"
#include "Interfaceee.h"

class ExecuterGeneral
{
private:
    Result result;

public:

    ExecuterGeneral()
    {
    }

    Result DigitalReadCmdd(Interfaceee&, int);

    Result AnalogReadCmdd(Interfaceee&, int);

    Result DigitalWriteCmdd(Interfaceee&, int, int);

    Result AnalogWriteCmdd(Interfaceee&, int, int);


};

#endif
// endif EXECUTER_GENERAL_H


