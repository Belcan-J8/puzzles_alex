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
void CyanLogger::Log(std::string string)
{
	std::cout << termcolor::cyan << string << std::endl;
	std::cout << termcolor::reset;
}
void MagentaLogger::Log(std::string string)
{
	std::cout << termcolor::magenta << string << std::endl;
	std::cout << termcolor::reset;
}
void YellowLogger::Log(std::string string)
{
	std::cout << termcolor::yellow << string << std::endl;
	std::cout << termcolor::reset;
}
