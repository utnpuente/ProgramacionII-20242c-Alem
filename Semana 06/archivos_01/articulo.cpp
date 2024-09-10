#include <iostream>
#include "articulo.h"
using namespace std;

void cargarArticulos()
{

}

void listarArticulos()
{

}

void mostrarArticulo(const Articulo &articulo)
{
    cout << "Código      :" << articulo.cod << endl;
    cout << "Descripción : " << articulo.descipcion << endl;
    cout << "Precio      : $" << articulo.precio << endl;

}
