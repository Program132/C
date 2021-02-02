#include "math.h"
#include <iostream>

using namespace N;

double math::add(double a, double b)
{
	auto result = a + b;
	return result;
}

double math::remove(double a, double b)
{
	return a - b;
}

double math::multi(double a, double b)
{
	return a * b;
}

double math::divi(double a, double b)
{
	return a / b;
}

int math::power(int number, int choice)
{
	if (number != 1 && number != 0 && choice != 0 && choice != 1)
	{
		switch (choice)
		{
		case 2:
			number = number * number;
		case 3:
			number = number * number * number;
		case 4:
			number = number * number * number * number;
		case 5:
			number = number * number * number * number * number;
		case 6:
			number = number * number * number * number * number * number;
		case 7:
			number = number * number * number * number * number * number * number;
		case 8:
			number = number * number * number * number * number * number * number * number;
		case 9:
			number = number * number * number * number * number * number * number * number * number;
		case 10:
			number = number * number * number * number * number * number * number * number * number * number;
		default:
			break;
		}

		return number;
	}
}