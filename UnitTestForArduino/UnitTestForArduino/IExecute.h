#ifndef IEXECUTE_H
#define IEXECUTE_H

class IExecute
{
public:

	virtual Result DigitalReadCmd(int) = 0;

	virtual Result DigitalWriteCmd(int, int) = 0;

	virtual Result AnalogReadCmd(int) = 0;

	virtual Result AnalogWriteCmd(int, int) = 0;
};

#endif
// endif IEXECUTE_H