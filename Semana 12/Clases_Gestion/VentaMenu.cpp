#include <iostream>
#include "VentaMenu.h"

using namespace std;

VentaMenu::VentaMenu()
{
    _salir = false;
}


void VentaMenu::mostrar()
{
    do
    {
        system("cls");
        cout << "-----------------" << endl;
        cout << "1 - NUEVA VENTA" << endl;
        cout << "2 - LISTAR VENTAS" << endl;
        cout << "0 - VOLVER" << endl;
        cout << "-----------------" << endl;
        cout << "OPCION: ";
        cin >> _opcion;

        opciones();

    }
    while (!_salir);
}

void VentaMenu::opciones()
{
    switch(_opcion)
    {
    case 1:
//        opcionGestionarVenta();
        cout << "Opcion gestionar venta" << endl;
        system("pause > nul");
        break;
    case 2:
//        opcionListarVentas();
        cout << "Opcion listar venta" << endl;
        system("pause > nul");

        break;
    case 0:
        _salir = true;
        break;
    }
}
