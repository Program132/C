#include <iostream>
#include <fstream>
#include <string>
#include "file.h"


void info_file()
{
	std::cout << "The module File has : open, write, read, info_file" << std::endl;
}

void open(std::string file)
{
	std::ofstream fi(file);

	if (fi)
	{
		std::cout << "File foud." << std::endl;

		fi.close();
	}
	else
	{
		std::cout << "Error : file not found." << std::endl;
	}
}

void write(std::string file, std::string txt)
{
	std::ofstream fi(file);

	if (fi)
	{
		fi << txt;

		fi.close();
	}
}

void read(std::string file)
{
	std::ifstream fi(file);

	if (fi)
	{
		std::string lignes;
		while (getline(fi, lignes))
		{
			std::cout << lignes << std::endl;
		}

		fi.close();
	}
}