#include <iostream>
#include "math.h"
#include "code.h"

int main()
{
    std::cout << "Loading Modules : Math\n" << std::endl;

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

    std::cout << "\nLoading Modules : Code\n" << std::endl;

    info();
    math();
    code();
    learn_cpp();
}