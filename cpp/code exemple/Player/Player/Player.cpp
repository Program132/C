#include <iostream>
#include <string>

class Player
{
    private: // Variable in the class, you can in public but if you don't change outside of the class set them private!
        int health;
        std::string name;
        std::string surname;

    public: // Functions
        std::string changeName(std::string const newName)
        {
            name = newName;
            return newName;
        }

        std::string changeSurname(std::string const newName)
        {
            surname = newName;
            return newName;
        }

        int changeHealth(int const Health)
        {
            health = Health;
            return Health;
        }


        void seeHealth()
        {
            std::cout << health << std::endl;
        }

        void seeName()
        {
            std::cout << name << std::endl;
        }

        void seeSurname()
        {
            std::cout << surname << std::endl;
        }
};

int main()
{
    Player plr; // We declare the variable

    std::cout << "Player..." << std::endl;

    // We call functions

    plr.changeHealth(100);
    plr.changeName("P");
    plr.changeSurname("PE");

    plr.seeHealth();
    plr.seeName();
    plr.seeSurname();

    plr.changeHealth(75);
    plr.changeName("Program");
    plr.changeSurname("Program Entertainment");

    plr.seeHealth();
    plr.seeName();
    plr.seeSurname();

    return 0;
}