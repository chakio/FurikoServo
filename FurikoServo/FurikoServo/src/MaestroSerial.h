#pragma once
#include <stdio.h>
#include <windows.h>
class Maestro
{
public:
	Maestro();
	~Maestro();
	HANDLE openPort(const char * portName, unsigned int baudRate);
	BOOL maestroGetPosition(HANDLE port, unsigned char channel, unsigned short * position);
	BOOL maestroSetTarget(HANDLE port, unsigned char channel, unsigned short target);
private:

};

