#include <iostream>
#include <string>

using str = std::string;
using entier = int;
using decimal = double;
using vf = bool;

int main()
{
    std::cout << "Hello World!\n";

    str Hello = "Name";

    entier a = 5;

    decimal b = 5.5;

    vf v = true;

    std::cout << Hello << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << v << std::endl;

    return 0;
}