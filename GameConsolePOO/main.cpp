#include <iostream>

using namespace std;

class Personnage
{
    // Déclaration des variables

    private:

    int vie;
    int degat;
    bool vivant;

    public:

    // Méthodes / Function

    Personnage() // Création du constructeur
    {
        vie = 100;
    }

    void recevoirDegats(int nbDegats)
    {
        if (nbDegats == 100)
        {
            cout << "Le joueur a recu des degats : " << nbDegats << endl;
            estVivant(false);
        }
        else
        {
            cout << "Le joueur a recu des degats : " << nbDegats << endl;
            vie = vie - nbDegats;
            cout << "La vie du joueur est maintenant de " << vie << ", le joueur est donc toujours en vie" << endl;
        }
    }

    void attaquer(Personnage &cible)
    {
        cout << "Le joueur a ete attaque" << endl;
    }

    void estVivant(bool vivant)
    {
        if (!vivant)
        {
            cout << "Le joueur n'a plus de vie et il est donc mort" << endl;
        }
    }
}; // pensez au ; à la fin de la classe !

int main()
{

    Personnage bey, ptitloup;

    char Key;
    int Degats;

    cout << "Bienvenue dans ce GameConsolePOO" << endl;
    cout << "Le but est simple appuyer sur une touche pour lancer l'attaque" << endl;

    cout << "\nPlusieurs options : \nLa touche A pour faire une attaque de 20 de degat \nLa touche B qui permet de faire 100 de degats \nLa touche C pour faire des degats personnalise" << endl;

    cin >> Key;

    if (Key == 'A' || Key == 'a')
    {
        bey.attaquer(ptitloup);
        ptitloup.recevoirDegats(20);
    }
    else if (Key == 'B' || Key == 'b')
    {
        ptitloup.attaquer(bey);
        bey.recevoirDegats(100);
    }
    else if (Key == 'C' || Key == 'c')
    {
        cout << "Veuillez inserer les degat que vous voulez mettre. Attention vous ne pouvez pas faire plus de 100 de degat" << endl;
        cin >> Degats;

        bey.attaquer(ptitloup);
        ptitloup.recevoirDegats(Degats);
    }
    else
    {
        cout << "Cette option n'est pas disponible" << endl;
    }

    cout << "\nFin du jeu GameConsolePOO" << endl;


    return 0;
}
