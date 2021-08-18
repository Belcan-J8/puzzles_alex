#include "FuelGauge.h"


FuelGauge::FuelGauge()
	: fuelLevel(10)
	, colorprinter(new YellowLogger())
{
}
void FuelGauge::DecrementFuelLevel()
{
	--fuelLevel;
	


	if (fuelLevel > 5)
	{
		tempfuelLevel = fuelLevel/2; // scaling the tank size for car 1 since overall fuel amount was doubled 
	}
	
	//cout << "fuelLevel: " << fuelLevel << "\n";
	//cout << "tempfuelLevel: " << tempfuelLevel << "\n";

	if ((fuelLevel <= 2) || ((tempfuelLevel - 1 <= 2) && fuelLevel >= 7) )
	{
		colorprinter->Log("Low fuel!");
		std::cout << termcolor::reset;
	}
}
