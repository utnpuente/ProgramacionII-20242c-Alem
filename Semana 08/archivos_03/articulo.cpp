#include <iostream>
#include "articulo.h"
using namespace std;

void mostrarArticulo(const Articulo &articulo)
{
    cout << "Código      : " << articulo.cod << endl;
    cout << "Descripción : " << articulo.descipcion << endl;
    cout << "Precio      : $" << articulo.precio << endl;
    cout << "Costo       : $" << articulo.costo << endl;
    cout << "Stock       : " << articulo.stock << endl;
    cout << "Stock       : " << (articulo.estado ? "Activo" : "No Activo" ) << endl;
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

    cout << "Ingrese el costo: $";
    cin >> aux.costo;

    cout << "Ingrese el stock: ";
    cin >> aux.stock;

    aux.estado = true;

    return aux;
}
