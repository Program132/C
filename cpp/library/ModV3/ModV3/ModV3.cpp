#include <iostream>
#include <string>
#include "math.h"
#include "files.h"
#include "str.h"

using string = std::string;

using namespace N;

int main()
{
    math math; // First module
    files file; // Second module
    st Str; // Third module

    std::cout << "Hello, welcome to Modules V3 ! \n" << std::endl;

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

    string read{"read.txt"};
    string write{"write.txt"};

    file.read(read);
    file.write(write, "Lol, I'm a text !");
    file.read(write);



    /*
    * Thid module : Str
    */

    string sentence{"My sentence !"};

    std::cout << sentence << std::endl;
    std::cout << "The length of sentence : " << Str.length(sentence) << std::endl;
    std::cout << "The size of sentence : " << Str.size(sentence) << std::endl;
}