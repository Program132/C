#include <iostream>

int main()
{
    std::cout << "I will count to 5." << std::endl;
    int nbr{ 0 };

    while (nbr <= 5)
    {
        std::cout << nbr << std::endl;
        ++nbr; //Add + 1
    }

   

    char entry{ '!' };
    int compter{ 0 };

    while (compter <= 5 && entry != 'e') //If I enter 'e' it's the end of the loop
    {
        std::cout << "Le compteur vaut " << compter << std::endl;
        std::cout << "Rentre un caractère : ";
        std::cin >> entry;

        ++compter;
    }

    std::cout << "End of the loop." << std::endl;



    int number{ 5 };

    do
    {
        std::cout << "Value number : " << number << std::endl;
    } while (number < 5);




    for (int i{ 0 }; i <= 2; i++)
    {
        std::cout << i << std::endl;
    }

    return 0;
}