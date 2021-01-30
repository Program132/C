#include <iostream>
#define NOMINMAX
#include <Windows.h>

int main()
{
    std::cout << "Hello World!\n" << std::endl;
    SetConsoleOutputCP(1252);
    std::cout << "Text avec des accents : גהמןûüפײ" << std::endl;
    // Commentaire

    /* Commentaire 
    sous
    plusieurs
    lignes
    */
}
