#include <iostream>
#include <string>
#include <fstream>
#include "math.h"
#include "files.h"

using str = std::string;

int main()
{
    std::cout << "Welcome to Modules V2 by Program \n" << std::endl;

    /*
    * Now, the first module : math
    */

    double a = add(5, 6);
    std::cout << a << std::endl;

    double b = remove(5, 1000);
    std::cout << b << std::endl;

    double c = divi(5, 10);
    std::cout << c << std::endl;

    double d = multi(2, 10);
    std::cout << d << std::endl;



    /*
    * Now, the next module : files
    */

    str read = "read.txt";
    str write = "write.txt";

    reading(read);
    writing(write, "Lol");
    reading(write);

    return 0;
}