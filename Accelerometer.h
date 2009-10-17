#ifndef ACCELEROMETER_H
#define ACCELEROMETER_H

#include <WProgram.h>

class Accelerometer
{
public:
	Accelerometer(byte x, byte y, byte z, byte power, byte ground);
	uint16_t getValueX();
	uint16_t getValueY();
	uint16_t getValueZ();
	int getTotalChange();
	int getAverageChange();
	void update();
private:
	byte xPin;
	byte yPin;
	byte zPin;
	int dx;
	int dy;
	int dz;
	int x;
	int y;
	int z;
};


#endif