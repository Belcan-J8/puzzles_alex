#include "FuelGauge.h"
#include "C:\Projects\J8\puzzles_alex\termcolor-master\include\termcolor\termcolor.hpp"

FuelGauge::FuelGauge()
	: fuelLevel(5)
	, logger(new RedLogger())
{
}
void FuelGauge::DecrementFuelLevel()
{
	--fuelLevel;
	if (fuelLevel < 2)
	{
		logger->Log("Low fuel!");
		std::cout << termcolor::blue << "\b" << termcolor::reset << std::endl;
	}
}
