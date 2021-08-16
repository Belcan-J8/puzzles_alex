#include "Car.h"


Car::Car()
	: logger(new BlueLogger())
{
}
void Car::TurnLeft()
{
	logger->Log("Turning left"); //print in blue
	fuelGauge.DecrementFuelLevel();
}
void Car::TurnRight()
{
	logger->Log("Turning right"); //print in blue
	fuelGauge.DecrementFuelLevel();
}
void Car::Accelerate()
{
	logger->Log("Moving ahead"); //print in blue
	fuelGauge.DecrementFuelLevel();
	fuelGauge.DecrementFuelLevel();
}
