#ifndef INTERFACE_H
#define INTERFACE_H

class Interfaceee
{
public:

	virtual Result DigitalReadCmd(int) = 0;

	virtual Result DigitalWriteCmd(int, int) = 0;

	virtual Result AnalogReadCmd(int) = 0;

	virtual Result AnalogWriteCmd(int, int) = 0;
};

#endif
// endif INTERFACE_H