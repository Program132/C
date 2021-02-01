#include "Math.h"
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

int power(int number, int choice)
{

    switch (choice)
    {
    case 2:
        number = number * number;
        break;
    case 3:
        number = number * number * number;
        break;
    case 4:
        number = number * number * number * number;
        break;
    case 5:
        number = number * number * number * number * number;
        break;
    case 6:
        number = number * number * number * number * number * number;
        break;
    case 7:
        number = number * number * number * number * number * number;
        break;
    case 8:
        number = number * number * number * number * number * number * number;
        break;
    case 9:
        number = number * number * number * number * number * number * number * number;
        break;
    case 10:
        number = number * number * number * number * number * number * number * number * number;
        break;
    default:
        break;
    }

    return number;
}