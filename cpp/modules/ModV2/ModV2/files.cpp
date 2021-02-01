#include <fstream>
#include <iostream>
#include <string>
#include "files.h"

using str = std::string;

void reading(str file)
{
	std::ifstream MyFile{ file, std::ios::app };

	str ligne{ "" };

	while (std::getline(MyFile, ligne))
	{
		std::cout << ligne << std::endl;
	}
}

void writing(str file, str text)
{
	std::ofstream MyFile(file);

	MyFile << text;
}