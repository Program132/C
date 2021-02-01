#include <iostream>
#include "Math.h"


int main()
{
    std::cout << "Loading...\n" << std::endl;

    double a = add(5, 6);

    std::cout << a << std::endl;

    double b = remove(5, 6);

    std::cout << b << std::endl;

    double c = multi(5, 6);

    std::cout << c << std::endl;

    auto d = power(5, 2);

    std::cout << d << std::endl;

    auto e = power(3, 10);

    std::cout << e << std::endl;

    return 0;
}