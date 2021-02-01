#include "math.h"
#include <iostream>

double add(double a, double b)
{
	return a + b;
}

double remove(double a, double b)
{
	return a - b;
}

double multi(double a, double b)
{
	return a * b;
}

double divi(double a, double b)
{
	return a / b;
}

int power(int number, int choice)
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