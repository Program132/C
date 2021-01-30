#include <iostream>

int main()
{
    std::cout << "Salut toi !" << std::endl; // String
    std::cout << 'S' << 'a' << 'l' << 'u' << 't' << std::endl; // Char

    std::cout << "5 + 5 = " << 5 + 5 << std::endl;
    std::cout << "10 - 5 = " << 10 - 5 << std::endl;
    std::cout << "5 * 5 = " << 5 * 5<< std::endl;
    std::cout << "5. / 4 = " << 5. / 4 << std::endl;
    std::cout << "5 / 4 = " << 5 / 4 << std::endl;



    int nbr { 5 };
    std::cout << "La valeur du nombe est de " << nbr << std::endl;

    char lettre { 'a' };
    std::cout << "La valeur de la lettre est " << lettre << std::endl;

    double pi { 3.1415926 };
    std::cout << "La valeur du célèbre nombre pi est " << pi << std::endl;

    std::string name {"Program"};
    std::cout << "La valeur de string est " << name << std::endl;
    // we can declare variable with an =, so : int nbr = 5;, char lettre = 'a';, double pi = 3.1415926;...



    std::string const discord{ "Program#1807" };
    /*
    discord = "Program"; // Error
    */



    //if need help to declare variable
    auto nbr2{ 5 }; // Detecte if it's an int
    std::cout << "La valeur du nombe est de " << nbr2 << std::endl;



    using namespace std::literals; //Write one time
    auto chaine{ "The text."s };
    std::cout << chaine << std::endl;



    //Entry
    std::cout << "Name : " << std::endl;
    std::string name2{""};
    std::cin >> name2;
    std::cout << "Your name is " << name2 << std::endl;
}   
