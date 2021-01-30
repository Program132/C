#include <iostream>
#include <string>

int add(int a, int b) // A function who do a + b so for example : 5 + 6
{
    return a + b;

    // Need return.
}

void printing(std::string args) // A second function
{
    std::cout << args << "\n" << std::endl; 

    // Not need return something with void.
}

std::string printing2(std::string args)
{
    std::cout << args << "\n" << std::endl;

    return args; // We need return something, for example args.
}

int main()
{
    std::cout << "Functions ! \n";

    std::cout << add(5, 6) << "\n" << std::endl; // We call the function
    printing("Hello I'm a text in a function !");
    printing2("Hello I'm a text who call a second function !");
}
