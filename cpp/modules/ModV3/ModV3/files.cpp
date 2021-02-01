#include "files.h"
#include <string>
#include <fstream>
#include <iostream>

using namespace N;

using str = std::string;

str files::read(str file)
{
	std::ifstream MyFile{ file, std::ios::app };

	str ligne{ "" };

	while (std::getline(MyFile, ligne))
	{
		std::cout << ligne << std::endl;
	}

	return file;
}

str files::write(str file, str text)
{
	std::ofstream MyFile(file);

	MyFile << text;

	return file, text;
}