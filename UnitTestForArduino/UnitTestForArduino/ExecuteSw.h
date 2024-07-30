#ifndef EXECUTE_SW_H
#define EXECUTE_SW_h
#include "Result.h"
#include "IExecute.h"

class ExecuteSw : public IExecute
{
private:
    Result result;

public:

    ExecuteSw()
    {
    }

    Result DigitalReadCmd(int);

    Result DigitalWriteCmd(int, int);

    Result AnalogReadCmd(int);

    Result AnalogWriteCmd(int, int);
};

#endif
// endif EXECUTE_SW

