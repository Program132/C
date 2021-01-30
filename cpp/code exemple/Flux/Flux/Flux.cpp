#include <fstream>
#include <iostream>
#include <string>

int main()
{

    // Writing in a file

    std::ofstream fichier{"write.txt"}; // Declare the variable
    fichier << "Writing... " << " | " << " Done !"; // We write
    std::string sentence{"My new sentence."};
    fichier << "\n" << sentence << std::endl; // We write with a variable



    // Read a file

    std::ifstream reading{ "read.txt" };
    std::string ligne{ "" };

    while (std::getline(reading, ligne))
    {
        std::cout <<  ligne << std::endl;
    }

    return 0;
}