#include <iostream>

int main()
{
    bool const hasFriends{ true };

    if (hasFriends) // No need == true, just the variable, so hasFriends
    {
        std::cout << "You have friends." << std::endl;
    }



    int const note {5};

    if (note == 5) // >=, <=, ==, !=
    {
        std::cout << "Your mark it's not very good..." << std::endl;
    }
    else
    {
        std::cout << "I don't know your mark." << std::endl;
    }



    int const note2 { 15 };

    if (note2 == 10)
    {
        std::cout << "Good, I think you can improve that." << std::endl;
    }
    else if (note2 >= 15)
    {
        std::cout << "Very good!" << std::endl;
    }
    else
    {
        std::cout << "I don't know your mark, sorry. Try re start!" << std::endl;
    }



    std::string const name{ "Program" };
    std::string const tag{ "1807" };

    if (tag == "1807" && name == "Program")
    {
        std::cout << "Your are the creator!" << std::endl;
    }
    else
    {
        std::cout << "Access Denied!" << std::endl;
    }



    bool const vegan{ true };
    bool const vegetarien{ true };

    if (!vegan || !vegetarien) // To check if it's false
    {
        std::cout << "I think you are Flexitarian." << std::endl;
    }
    else
    {
        std::cout << "I think you aren't Flexitarian." << std::endl;
    }

    return 0;
}