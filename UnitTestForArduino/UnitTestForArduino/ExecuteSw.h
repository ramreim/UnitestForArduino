#ifndef EXECUTE_SW
#define EXECUTE_SW
#include "Result.h"
#include "Interfaceee.h"

class ExecuteSw : public Interfaceee
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

