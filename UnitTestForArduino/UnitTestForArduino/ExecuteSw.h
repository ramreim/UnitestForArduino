#ifndef EXECUTE_SW
#define EXECUTE_SW
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

