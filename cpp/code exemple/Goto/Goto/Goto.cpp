#include <iostream>
#include <string>

int main()
{
    std::cout << "goto example \n";

    int a = 5;

    if (a == 5)
    {
        goto end;
    }

end:
    std::cout << "A = 5" << std::endl;


    std::string name = "Program";

    if (name == "Program")
    {
        goto Found;
    }

Found:
    std::cout << "Found!" << std::endl;
}