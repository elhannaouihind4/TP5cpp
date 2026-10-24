#include "Utilisateur.hpp"

int Utilisateur::nbUtilisateursConnectes = 0;

Utilisateur::Utilisateur(string n, string r)
    : nom(n), role(r) {
    nbUtilisateursConnectes++;
}

Utilisateur::~Utilisateur() {
    nbUtilisateursConnectes--;
}

int Utilisateur::getNbUtilisateursConnectes() {
    return nbUtilisateursConnectes;
}


