#include <iostream>
#include <string>
#include "math.h"
#include "code.h"
#include "file.h"

int main()
{
    std::cout << "Loading Module : Math\n" << std::endl;

    int result = add(5, 10);
    std::cout << result << std::endl;

    int result2 = remove(50, 10);
    std::cout << result2 << std::endl;

    int result3 = divi(15, 10);
    std::cout << result3 << std::endl;

    int result4 = multi(5, 10);
    std::cout << result4 << std::endl;

    int carrerr = doubleNbr(10);
    std::cout << carrerr << std::endl;

    int triple = tripleNbr(10);
    std::cout << triple << std::endl;

    std::cout << "\nLoading Module : Code\n" << std::endl;

    info_code();
    math();
    code();
    learn_cpp();
    var();
    function();

    std::cout << "\nLoading Module : File\n" << std::endl;

    info_file();
    std::string file = "C:/Users/franc/Desktop/cpp/test.txt";
    open(file);

    write(file, "Bonjour ca va ?");
    read(file);
}