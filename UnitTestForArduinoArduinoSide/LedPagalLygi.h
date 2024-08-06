#ifndef EXECUTE_HW_H
#define EXECUTE_HW_H
#include "Result.h"

class LedPagalLygi
{
private:
    Result result;

public:

    LedPagalLygi()
    {
    }

    int KuriPinaIjungti(int);

    Result PinOnOff(int, int);
};

#endif
// endif EXECUTE_HW

