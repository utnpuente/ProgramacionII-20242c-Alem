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
    cout << "Ingrese a�o: ";
    cin >> aux.anio;

    return aux;
}

void mostrarFecha(Fecha &fecha)
{
    cout << fecha.dia << "/" << fecha.mes << "/" << fecha.anio << endl;
}
