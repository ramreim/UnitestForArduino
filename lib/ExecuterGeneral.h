#ifndef EXECUTER_GENERAL_H
#define EXECUTER_GENERAL_H
#include "Result.h"
#include "IExecute.h"

class ExecuterGeneral
{
private:
    Result result;

public:

    ExecuterGeneral()
    {
    }

    Result DigitalReadCmdd(IExecute&, int);

    Result AnalogReadCmdd(IExecute&, int);

    Result DigitalWriteCmdd(IExecute&, int, int);

    Result AnalogWriteCmdd(IExecute&, int, int);


};

#endif
// endif EXECUTER_GENERAL_H


