#ifndef EXECUTE_HW_H
#define EXECUTE_HW_H
#include "Result.h"
#include "IExecute.h"

class ExecuteHw : public IExecute
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
