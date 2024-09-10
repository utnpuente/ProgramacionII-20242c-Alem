#include <iostream>
#include "menu.h"
using namespace std;

void mostrarMenu()
{
    system("cls");

    int opcion;
    bool salir;

    do
    {
        cout << "-----------------" << endl;
        cout << "1 - CARGAR ARTÖUCLOS" << endl;
        cout << "2 - VER LISTADO DE ARTÖCULOS" << endl;
        cout << "0 - SALIR" << endl;
        cout << "-----------------" << endl;
        cout << "OPCION: ";
        cin >> opcion;

        salir = opcionMenu(opcion);

    } while (!salir);
}

bool opcionMenu(int opcion)
{
    bool salir = false;

    switch (opcion)
    {
    case 1:
        // Realiza accion
        system("cls");
        // Cargar el art¡culo
        system("pause > nul");
        break;
    case 2:
        // Realiza accion
        system("cls");
        //Listar art¡culos
        system("pause > nul");
        break;
    case 0:
        system("cls");
        cout << "¨Seguro quiere salir? ";
        cin >> salir;
        break;
    default:
        break;
    }

    return salir;
}