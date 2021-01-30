#include <iostream>
#include <string>
#include "send.h"

void printing(std::string const& message)
{
	std::cout << message << std::endl;
}

std::string info()
{
	std::cout << "Hello, this file can execute printing." << std::endl;

	return "Done";
}