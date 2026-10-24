#include "Produit.hpp"

float Produit::tauxTVA = 20.0f;

Produit::Produit(string n, float prix)
    : nom(n), prixHT(prix) {
}

float Produit::getPrixTTC() const {
    return prixHT * (1 + tauxTVA / 100);
}

void Produit::modifierTVA(float nouveauTaux) {
    tauxTVA = nouveauTaux;
}


