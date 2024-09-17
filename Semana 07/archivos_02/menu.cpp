#include <iostream>
#include "menu.h"
#include "articulo.h"
#include "archivoArticulo.h"
using namespace std;

void mostrarMenu()
{

    int opcion;
    bool salir;

    do
    {
        system("cls");
        cout << "-----------------" << endl;
        cout << "1 - CARGAR ARTICULOS" << endl;
        cout << "2 - VER LISTADO DE ARTICULOS" << endl;
        cout << "3 - BUSCAR ARTICULO" << endl;
        cout << "4 - MODIFICAR PRECIO" << endl;
        cout << "5 - CANTIDAD DE REGISTROS" << endl;
        cout << "0 - SALIR" << endl;
        cout << "-----------------" << endl;
        cout << "OPCION: ";
        cin >> opcion;

        salir = opcionMenu(opcion);

    }
    while (!salir);
}

bool opcionMenu(int opcion)
{
    bool salir = false;

    switch (opcion)
    {
    case 1:
        opcionGuardarArticulos();
        break;
    case 2:
        opcionListarArticulos();
        break;
    case 3:
        opcionBuscarArticulos();
        break;
    case 4:
        opcionModificarArticulos();
        break;
    case 5:
        opcionCantidadArticulos();
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


void opcionGuardarArticulos()
{
    system("cls");

    Articulo art = cargarArticulo();

    bool pudoGuardar = guardarArticulo(art);

    if(pudoGuardar)
    {
        cout << "El registro se guardó exitosamente!" << endl;
    }
    else
    {
        cout << "El registro no se ha podido guardar" << endl;
    }

    system("pause");
}

void opcionCantidadArticulos()
{
    system("cls");

    int cantReg = cantidadArticulos();
    cout << "La cantidad de Articulos cargados son " << cantReg << endl;

    system("pause");
}

void opcionListarArticulos()
{
    system("cls");

    int cantReg = cantidadArticulos();

    for(int i = 0; i < cantReg; i++)
    {
        Articulo aux = leerArticulo(i);
        mostrarArticulo(aux);
        cout << endl;
    }

    system("pause");
}

void opcionBuscarArticulos()
{
    system("cls");

    int cod;

    cout << "Ingrese el código a buscar: ";
    cin >> cod;

    int indice = buscarArticuloPorCodigo(cod);

    Articulo aux = leerArticulo(indice);

    if(indice != -1)
    {
        mostrarArticulo(aux);
    }
    else{
        cout << "El código no ha sido encontrado" << endl;
    }


    system("pause");
}

void opcionModificarArticulos()
{
    system("cls");

    int cod;

    cout << "Ingrese el código a buscar: ";
    cin >> cod;

    int indice = buscarArticuloPorCodigo(cod);
    Articulo aux = leerArticulo(indice);

    aux.precio = 1234;

    modificarArticulo(aux, indice);

    system("pause");
}

