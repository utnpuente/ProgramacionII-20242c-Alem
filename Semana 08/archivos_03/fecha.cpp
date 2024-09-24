#include <iostream>
#include "fecha.h"
using namespace std;

Fecha cargarFecha()
{
    Fecha aux;

    cout << "Ingrese dia: ";
    cin >> aux.dia;
    cout << "Ingrese mes: ";
    cin >> aux.mes;
    cout << "Ingrese año: ";
    cin >> aux.anio;

    return aux;
}

void mostrarFecha(Fecha &fecha)
{
    cout << fecha.dia << "/" << fecha.mes << "/" << fecha.anio << endl;
}
