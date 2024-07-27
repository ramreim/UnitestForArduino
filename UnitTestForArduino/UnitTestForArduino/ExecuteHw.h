#ifndef EXECUTE_HW
#define EXECUTE_HW
#include "Result.h"
#include "Interfaceee.h"

class ExecuteHw : public Interfaceee
{
private:
    Result result;

public:

    ExecuteHw()
    {
    }

    Result DigitalReadCmd(int);

    Result DigitalWriteCmd(int, int);

    Result AnalogReadCmd(int);

    Result AnalogWriteCmd(int, int);
};

#endif
// endif EXECUTE_HW

