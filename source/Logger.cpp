#include "Logger.h"


#include <iostream>

void Logger::Log(std::string string)
{
	std::cout << string << std::endl;
	std::cout << termcolor::reset;
}
void BlueLogger::Log(std::string string)
{
	std::cout << termcolor::blue << string << std::endl;
	std::cout << termcolor::reset;
}
void RedLogger::Log(std::string string)
{
	std::cout << termcolor::red << string << std::endl;
	std::cout << termcolor::reset;
}
