#include <iostream>
#include "menu.h"
#include "articulo.h"
#include "archivoArticulo.h"
#include "archivoVenta.h"
#include "venta.h"
#include "fecha.h"
using namespace std;

void mostrarMenu()
{
    int opcion;
    bool salir;

    do
    {
        system("cls");
        cout << "-----------------" << endl;
        cout << "1 - ARTICULOS" << endl;
        cout << "2 - VENTAS" << endl;
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

    switch(opcion)
    {
    case 1:
        mostrarMenuArticulo();
        break;
    case 2:
        mostrarMenuVenta();
        break;
    case 0:
        cout << "¿Seguro quiere salir (ingrese 1 para salir, 0 para no salir)?";
        cin >> salir;
        break;

    }

    return salir;

}

void mostrarMenuArticulo()
{

    int opcion;
    bool volver;

    do
    {
        system("cls");
        cout << "-----------------" << endl;
        cout << "1 - CARGAR ARTICULOS" << endl;
        cout << "2 - VER LISTADO DE ARTICULOS" << endl;
        cout << "3 - BUSCAR ARTICULO" << endl;
        cout << "4 - MODIFICAR PRECIO" << endl;
        cout << "5 - CANTIDAD DE REGISTROS" << endl;
        cout << "0 - VOLVER" << endl;
        cout << "-----------------" << endl;
        cout << "OPCION: ";
        cin >> opcion;

        volver = opcionMenuArticulo(opcion);

    }
    while (!volver);
}

bool opcionMenuArticulo(int opcion)
{
    bool volver = false;

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
        volver = true;
        break;
    }

    return volver;
}

void mostrarMenuVenta()
{
    int opcion;
    bool salir;

    do
    {
        system("cls");
        cout << "-----------------" << endl;
        cout << "1 - NUEVA VENTA" << endl;
        cout << "2 - LISTAR VENTAS" << endl;
        cout << "0 - VOLVER" << endl;
        cout << "-----------------" << endl;
        cout << "OPCION: ";
        cin >> opcion;

        salir = opcionMenuVenta(opcion);

    }
    while (!salir);
}

bool opcionMenuVenta(int opcion)
{
    bool volver = false;

    switch(opcion)
    {
    case 1:
        opcionGestionarVenta();
        break;
    case 2:
        opcionListarVentas();
        break;
    case 0:
        volver = true;
        break;
    }

    return volver;

}

//----------------------------------------------
// OPCIONES ARTICULOS
//----------------------------------------------

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
    else
    {
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

//----------------------------------------------
// OPCIONES VENTAS
//----------------------------------------------

void opcionGestionarVenta()
{
    system("cls");

    int codArt, cantidad;
    float montoTotal = 0;

    Venta auxVenta;

    auxVenta.nro = generarID();
    Fecha auxFecha = cargarFecha();
    auxVenta.fecha = auxFecha;

    cout << "ingrese el código de l artículo: ";
    cin >> codArt;

    while(codArt != 0)
    {
        cout << "Ingrese la cantidad: ";
        cin >> cantidad;

        int indice = buscarArticuloPorCodigo(codArt);

        // Validar que no sea -1

        Articulo aux = leerArticulo(indice);

        // validar que aux.cod no sea 0

        // Validar stock
//        while(aux.stock < cantidad)
//        {
//            cout << "Ingrese la cantidad: ";
//            cin >> cantidad;
//        }

        float monto = cantidad * aux.precio;

        // Modificar stock
        aux.stock -= cantidad;
        modificarArticulo(aux, indice);

        // acumular total
        montoTotal += monto;

        cout << "Sub total: $ " << montoTotal << endl;

        auxVenta.nroArt = codArt;
        auxVenta.cantidad = cantidad;
        // Guardar registro
        guardarVenta(auxVenta);

        cout << "------" << endl;
        cout << "ingrese el código de l artículo: ";
        cin >> codArt;
    }

    cout << "El total a pagar es: $" << montoTotal;

    system("pause > nul");

}

void opcionListarVentas()
{
    system("cls");
    int cantidad = cantidadVentas();

    for(int i = 0; i < cantidad; i++)
    {
        Venta aux = leerAVenta(i);
        mostrarVenta(aux);
        cout << endl;
    }
    system("pause > nul");
}
