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
    cout << "C�digo      :" << articulo.cod << endl;
    cout << "Descripci�n : " << articulo.descipcion << endl;
    cout << "Precio      : $" << articulo.precio << endl;

}
