#include <iostream>
#include "articulo.h"
using namespace std;

void mostrarArticulo(const Articulo &articulo)
{
    cout << "Código      : " << articulo.cod << endl;
    cout << "Descripción : " << articulo.descipcion << endl;
    cout << "Precio      : $" << articulo.precio << endl;
}

Articulo cargarArticulo()
{
    Articulo aux;

    cout << "Ingrese el código: ";
    cin >> aux.cod;
    cin.ignore();

    cout << "Ingrese la descripción: ";
    cin.getline(aux.descipcion, CARACTER_DESC);

    cout << "Ingrese el precio: $";
    cin >> aux.precio;

    return aux;
}
