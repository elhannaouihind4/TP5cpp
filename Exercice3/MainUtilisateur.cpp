#include <iostream>
#include "Utilisateur.hpp"

using namespace std;

int main() {
    cout << "Nombre initial : "
         << Utilisateur::getNbUtilisateursConnectes() << endl;

    Utilisateur* u1 = new Utilisateur("Hind", "admin");

    cout << "Apres connexion de Hind : "
         << Utilisateur::getNbUtilisateursConnectes() << endl;

    Utilisateur* u2 = new Utilisateur("Reda", "visiteur");

    cout << "Apres connexion de Reda : "
         << Utilisateur::getNbUtilisateursConnectes() << endl;

    Utilisateur* u3 = new Utilisateur("Youssef", "visiteur");

    cout << "Apres connexion de Youssef : "
         << Utilisateur::getNbUtilisateursConnectes() << endl;

    delete u2;

    cout << "Apres deconnexion de Reda : "
         << Utilisateur::getNbUtilisateursConnectes() << endl;

    delete u1;

    cout << "Apres deconnexion de Hind : "
         << Utilisateur::getNbUtilisateursConnectes() << endl;

    delete u3;

    cout << "Apres deconnexion de Youssef : "
         << Utilisateur::getNbUtilisateursConnectes() << endl;

    return 0;
}




