#include <iostream>
#include "Bidon.h"
using namespace std;

int main()
{
    Bidon bidon;

    bidon.setCod(1);
    // set capacidad
    // set nombre
    // set cantidad

    // Lenar
    bidon.llenar();

//    bidon.cantidad = bidon.capacidad;
//    bidon.cantidad -= 150;

    cout << "Codigo " << bidon.getCod() << endl;
//    cout << "Cantidad " << bidon.cantidad << endl;

    return 0;
}
