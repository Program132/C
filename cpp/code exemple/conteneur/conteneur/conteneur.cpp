#include <iostream>
#include <vector>
#include <string>


int main()
{
    // begin



    std::vector<int> const tab1{5, 1, 2};

    std::vector<int>::const_iterator start_tab{ std::begin(tab1) }; //Show the first case

    auto end_tab{ std::end(tab1) }; 

    std::cout << *start_tab << std::endl;

    ++start_tab; // We add + 1 to see the second case

    std::cout << *start_tab << std::endl;


    std::cout << "Loading" << std::endl;


    // To don't repeat : ++YourTab;

    std::vector<int> tab2{10, 20, 30, 40 };

    for (auto it{ std::begin(tab2) }; it != std::end(tab2); ++it)
    {
        std::cout << *it << std::endl;
    }

    std::cout << "Loading" << std::endl;

    // end

    std::vector<int> tableau{0, 1, 2, 3};
    auto last{ std::end(tableau) };

    --last;
    
    std::cout << *last << std::endl;




    // others example

    std::string mot{ "Donjour" };

    auto const it{ std::begin(mot) };

    *it = 'B';

    std::cout << mot << std::endl; //Replace D to B

    *it = 'D';

    std::cout << mot << std::endl; //Replace B to D

    return 0;
}