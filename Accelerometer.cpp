#include "Accelerometer.h"

Accelerometer::Accelerometer(byte x, byte y, byte z, byte power, byte ground)
{
	xPin = x;
	yPin = y;
	zPin = z;
	
	pinMode(ground, OUTPUT);
	pinMode(power, OUTPUT);
	digitalWrite(ground, LOW);
	digitalWrite(power, HIGH);
}

void Accelerometer::update()
{
	dx = getValueX() - x;
	dy = getValueY() - y;
	dz = getValueZ() - z;
	
	x += dx;
	y += dy;
	z += dz;
}

int Accelerometer::getTotalChange()
{
	return dx + dy + dz;
}

int Accelerometer::getAverageChange()
{
	return (dx + dy + dz)/3;
}

uint16_t Accelerometer::getValueX()
{
	return analogRead(xPin);
}

uint16_t Accelerometer::getValueY()
{
	return analogRead(yPin);
}

uint16_t Accelerometer::getValueZ()
{
	return analogRead(zPin);
}