#include <iostream>
#include "Boite.hpp"

using namespace std;

int main() {
    Boite b1(9, 3, 1);
    Boite b2(5, 9, 2);
    Boite b3(8, 4, 7);

    cout << "Nombre de boites : "
         << Boite::getNombreBoites() << endl;

    {
        Boite b4(12, 6, 4);

        cout << "Apres creation de b4 : "
             << Boite::getNombreBoites() << endl;
    }

    cout << "Apres destruction de b4 : "
         << Boite::getNombreBoites() << endl;

    return 0;
}



