#include "Car.h"


Car::Car()
	: logger(new BlueLogger())
{
}
void Car::TurnLeft()
{
	logger->Log("Turning left"); //print in blue
	std::cout << termcolor::reset; //cancel blue printing
	fuelGauge.DecrementFuelLevel();
}
void Car::TurnRight()
{
	logger->Log("Turning right"); //print in blue
	std::cout << termcolor::reset; //cancel blue printing
	fuelGauge.DecrementFuelLevel();
}
void Car::Accelerate()
{
	logger->Log("Moving ahead"); //print in blue
	std::cout << termcolor::reset; //cancel blue printing
	fuelGauge.DecrementFuelLevel();
	fuelGauge.DecrementFuelLevel();
}
