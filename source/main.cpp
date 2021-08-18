#include "Car.h"
#include "Logger.h"


int main(int argc, char* argv[])
{
	Logger logger;

	logger.Log("Starting application");

	int numcars = 2; //number of cars
	int numcarstemp = numcars - 1; 

	for(int i = 0; i <= numcarstemp; i++){
		Car car;
		car.TurnLeft();
		car.TurnRight();
		car.Accelerate();
		car.currentcar = i; //keeping track of which car we are on 
	}

	logger.Log("Exiting application");

	
}
