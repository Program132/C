#include <iostream>
#include <string>

using str = std::string;

class RobotProgram
{
    public:
        void hello()
        {
            std::cout << "Hello ^^ !" << std::endl;
        }

        void hay()
        {
            std::cout << "Good." << std::endl;
        }

        void wip()
        {
            std::cout << "Program is a developper, her last project is PRC, a programming langage." << std::endl;
        }

        void waryh()
        {
            std::cout << "I'm here because I want explain who is Program for example." << std::endl;
        }

        void wiy()
        {
            std::cout << "Program invented me." << std::endl;
        }

        void thx()
        {
            std::cout << "Thanks !" << std::endl;
        }
};



int main()
{
    RobotProgram robot;

    std::cout << "Hello, welcome to this program : RobotProgram !\n" << std::endl;
    std::cout << "You can write : 'Hello', 'How are you ?', 'Who is Program ?', 'Why are you here ?', 'Who invented you ?', 'I want the end' !" << std::endl;

    str choice {""};

    std::cin >> choice;

    if (choice == "Hello")
    {
        robot.hello();
    }
    else if (choice == "How are you ?")
    {
        robot.hay();
    }
    else if (choice == "Who is Program ?")
    {
        robot.wip();
    }
    else if (choice == "Why are you here ?")
    {
        robot.waryh();
    }
    else if (choice == "Who invented you ?")
    {
        robot.wiy();
    }
    else if (choice == "I want the end")
    {
        robot.thx();
    }

    return 0;
}