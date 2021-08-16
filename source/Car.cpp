#include "Car.h"
#include "C:\Projects\J8\puzzles_alex\termcolor-master\include\termcolor\termcolor.hpp"

Car::Car()
	: logger(new BlueLogger())
{
}
void Car::TurnLeft()
{
	logger->Log("Turning left"); //print in blue
	std::cout << termcolor::blue << "\b" << termcolor::reset << std::endl; //cancel blue printing
	fuelGauge.DecrementFuelLevel();
}
void Car::TurnRight()
{
	logger->Log("Turning right"); //print in blue
	std::cout << termcolor::blue << "\b" << termcolor::reset << std::endl; //cancel blue printing
	fuelGauge.DecrementFuelLevel();
}
void Car::Accelerate()
{
	logger->Log("Moving ahead"); //print in blue
	std::cout << termcolor::blue << "\b" << termcolor::reset << std::endl; //cancel blue printing
	fuelGauge.DecrementFuelLevel();
	fuelGauge.DecrementFuelLevel();
}
