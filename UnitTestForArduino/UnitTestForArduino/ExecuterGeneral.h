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

    Result AnalogReadCmdd(Interfaceee&, int);
};

#endif
// endif EXECUTER_GENERAL_H


