#include <iostream>
#include <typeinfo>

int main()
{
    const int c{ 5 };
    std::cout << typeid(c).name() << std::endl;

    const std::string name{"Program"};
    std::cout << typeid(name).name() << std::endl;

    const bool t{ true };
    std::cout << typeid(t).name() << std::endl;

    const double d{ 5.25 };
    std::cout << typeid(d).name() << std::endl;

    const char cc{ 'a' };
    std::cout << typeid(cc).name() << "\n" << std::endl;

    

    // Example with if

    const int age{ 30 };

    std::string result{"int"};

    if (typeid(age).name() == result) {
        std::cout << "Ended : int !" << std::endl;
    }
    else {
        std::cout << "Ended." << std::endl;
    }

    return 0;
}