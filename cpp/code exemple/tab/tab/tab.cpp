#include <iostream>
#include <vector>
#include <array>

int main()
{
    // ---- With vector ----

    std::vector<int> const myNumbers{1, 2, 3, 4, 5};
    std::vector<double> const myDecimalNumbers{1.15, 2.25, 3.35, 4.45};
    std::vector<std::string> myString{"PRC", "Program", "Program#1807"};

    //Copy an already exist tab!

    std::vector<std::string> const My2ndStr{myString};

    //Print an element on a tab

    std::cout << "Case 1 of myNumbers : " << myNumbers[0] << std::endl;
    std::cout << "Case 5 of myNumbers : " << myNumbers[4] << std::endl;
    std::cout << "Case 3 of myNumbers : " << myNumbers[2] << std::endl;
    
    std::cout << "Case 1 of myDecimalNumbers : " << myDecimalNumbers[0] << std::endl;
    std::cout << "Case 4 of myDecimalNumbers : " << myDecimalNumbers[3] << std::endl;
    std::cout << "Case 3 of myDecimalNumbers : " << myDecimalNumbers[2] << std::endl;
    //Send error : std::cout << "Case 5 of myDecimalNumbers : " << myDecimalNumbers[4] << std::endl;



    //Print all with for

    for (auto element : myString)
    {
        std::cout << element << std::endl;
    }


    //Modify a value
    std::cout << myString[0] << std::endl;

    myString[0] = "prc";

    std::cout << myString[0] << std::endl;



    // ---- With array ----

    std::array<int, 5> const tableauInt5{ 1, 2, 3, 4, 5 };

    std::cout << tableauInt5[0] << std::endl;

    return 0;
}