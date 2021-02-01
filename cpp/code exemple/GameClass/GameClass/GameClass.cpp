#include <iostream>
#include <string>

class Game
{
    private:
        std::string name = "Game";
        std::string author = "Program Entertainment";
        std::string nameAuthor = "Program";

    public:
        void infoGame()
        {
            std::cout << "Hello, welcome to '" << name << "' ! This game has been create by " << author << " and the surname, name of the author is " << nameAuthor << " enjoy ! \n" << std::endl;
        }
};

class Fighting
{
    private:
        int health = 100;
        bool finish = false;

    public:
        int attack(int const damage)
        {
            if (!finish)
            {
                int const result = health - damage;
                health = result;

                std::cout << "You fight, your health : " << result << std::endl;

                return damage;
            }
            else
            {
                std::cout << "You can't, the fight is finish !" << std::endl;
            }
        }

        void potion()
        {
            if (!finish)
            {
                int const result = health + 25;
                health = result;

                std::cout << "You take a potion, your health is now : " << result << std::endl;
            }
            else
            {
                std::cout << "You can't, the fight is finish !" << std::endl;
            }
        }

        void fini()
        {
            if (!finish)
            {
                health = 0;

                std::cout << "The fight is finish." << std::endl;
                finish = true;
            }
            else
            {
                std::cout << "You can't, the fight is finish !" << std::endl;
            }
        }
};

int main()
{
    Game game; // Declare the variable
    Fighting fight; // Variable for Fighting

    std::cout << "Class Game and Fighting !\n";

    game.infoGame();

    fight.attack(50);
    fight.potion();
    fight.attack(10);
    fight.attack(15);
    fight.potion();
    fight.potion();
    fight.fini();

    return 0;
}