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

    Result Funkcija(Interfaceee&);
};

#endif
// endif EXECUTER_GENERAL_H


