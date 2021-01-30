#include <iostream>
#include <string>

int main()
{
    std::cout << "Lambdas... \n" << std::endl;

    auto const lam = [](std::string const& message) -> void {std::cout << "Your message : " << message << std::endl; }; // We create lambdas who execute something in {}

    lam("Hm");

    auto const lam2 = [](std::string const& message) -> void { // Here as well but we have two instructions
        std::cout <<  message << std::endl; 
        std::cout << "I seen your message !" << std::endl;
    };

    lam2("Hello, I'm a text called in a lambdas");

    return 0;
}