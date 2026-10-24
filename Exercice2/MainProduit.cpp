#include <iostream>
#include <iomanip>
#include "Produit.hpp"

using namespace std;

int main() {
    Produit p1("Ordinateur", 5000);
    Produit p2("Clavier", 200);
    Produit p3("Souris", 100);

    cout << fixed << setprecision(2);

    cout << "TVA initiale : 20%" << endl;

    cout << "Ordinateur TTC : "
         << p1.getPrixTTC() << " DH" << endl;

    cout << "Clavier TTC : "
         << p2.getPrixTTC() << " DH" << endl;

    cout << "Souris TTC : "
         << p3.getPrixTTC() << " DH" << endl;

    cout << "\nModification de la TVA a 10%" << endl;

    Produit::modifierTVA(10.0f);

    cout << "Ordinateur TTC : "
         << p1.getPrixTTC() << " DH" << endl;

    cout << "Clavier TTC : "
         << p2.getPrixTTC() << " DH" << endl;

    cout << "Souris TTC : "
         << p3.getPrixTTC() << " DH" << endl;

    return 0;
}



