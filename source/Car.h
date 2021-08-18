#pragma once

#include "FuelGauge.h"
#include "Logger.h"

//int numcars = 2; //number of cars
//int numcarstemp = numcars - 1; 
//int currentcar;

class Car
{
public:
	Car();
	void TurnLeft();
	void TurnRight();
	void Accelerate();
	int currentcar;
private:
	FuelGauge fuelGauge;
	ILogger* logger;
	ColorPrinter* colorprinter;
};

