#include "Boite.hpp"

int Boite::nbBoites = 0;

Boite::Boite(double l, double la, double h)
    : longueur(l), largeur(la), hauteur(h) {
    nbBoites++;
}

Boite::~Boite() {
    nbBoites--;
}

int Boite::getNombreBoites() {
    return nbBoites;
}



