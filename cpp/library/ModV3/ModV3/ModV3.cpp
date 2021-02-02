#include <iostream>
#include <string>
#include "math.h"
#include "files.h"

using str = std::string;

using namespace N;

int main()
{
    math math; // First module
    files file; // Second module

    std::cout << "Hello, welcome to Modules V3 ! \n";

    /*
    * First module : math
    */

    double a = math.add(5, 6);
    std::cout << a << std::endl;

    double b = math.remove(6, 1);
    std::cout << b << std::endl;

    double c = math.multi(5, 4);
    std::cout << c << std::endl;

    double d = math.divi(10, 100);
    std::cout << d << std::endl;

    double e = math.power(10, 100);
    std::cout << e << std::endl;

    /*
    * Seconde module : files
    */

    str read{"read.txt"};
    str write{"write.txt"};

    file.read(read);
    file.write(write, "Lol, I'm a text !");
    file.read(write);
}