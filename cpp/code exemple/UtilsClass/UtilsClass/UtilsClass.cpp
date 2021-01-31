#include <iostream>
#include <string>

class utils // We create class
{
    // We add "public" to execute function outside of the function

    public:

        // We create functions

        void name()
        {
            std::cout << "My name : Program" << std::endl;
        }

        void group()
        {
            std::cout << "My group : Program Entertainment" << std::endl;
        }

        void surname()
        {
            std::cout << "My surname : ptitloup132, beyptiloup, Scriptingbey" << std::endl;
        }
};

int main()
{
    utils myUtils; // We declare variables for the class

    std::cout << "Hello, class utils..." << std::endl;

    myUtils.name();
    myUtils.group();
    myUtils.surname();

    return 0;
}