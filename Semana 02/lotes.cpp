/*

    Una empresa que fabricar 20 artículos tiene la siguiente información para cada uno de ellos:
        - Cod de Art (4 Números no correlativos)
        - Precio Unitario
    Este Lote no se encuentra ordenado.

    Cuenta por otro lado con un lote de registros:
        - Nro cliente (1 al 300)
        - Cod Art (4 digitos no correaltivos)
        - Mes (1 al 12)
        - Dia (1 al 31)
        - Cantidad vendida

    Puede haber más de un registro para el mismo artículo.
    El Lote finaliza con un número de cliente igual a cero.

    - Se necesita un listado con el siguiente formato:
        codigo articulo - cantidad total vendida

    - El artículo que más recaudó
*/

#include <iostream>
using namespace std;

int buscarIndiceArt(int cods[], int tam, int cod);

int main()
{
    setlocale(LC_ALL, "spanish");

    // LOTE DE CARGA
    const int PRODUCTOS = 20;

    int     codArts[PRODUCTOS];
    float   precioArts[PRODUCTOS];

    for(int i = 0; i < PRODUCTOS; i++)
    {
        cin >> codArts[i];
        cin >> precioArts[i];
    }

    //LOTE DE PROCESO
    int nroCliente;
    int codArt;
    int mes;
    int dia;
    int cantidad;
    int indiceArt;

    int cantArts[PRODUCTOS] {};

    cout << "Ingrese número de cliente: ";
    cin >> nroCliente;

    while(nroCliente != 0)
    {
        cout << "Ingrese código de producto: ";
        cin >> codArt;
        cout << "Ingrese el mes: ";
        cin >> mes;
        cout << "Ingrese el día: ";
        cin >> dia;
        cout << "Ingrese la cantidad: ";
        cin >> cantidad;

        indiceArt = buscarIndiceArt(codArts, PRODUCTOS, codArt);

        if(indiceArt == -1)
        {
            cout << "El código de artículo no existe" << endl;
            cout << "Ingrese número de cliente: ";
            cin >> nroCliente;
            continue;
        }

        cantArts[indiceArt] += cantidad;

        cout << "------------" << endl;
        cout << "Ingrese número de cliente: ";
        cin >> nroCliente;
    }

    //PUNTO A
    cout << endl << "---------------------------" << endl;
    cout << "NRO ART\t\tCANTIDAD" << endl;
    cout << endl << "---------------------------" << endl;

    for(int i = 0; i < PRODUCTOS; i++)
    {
        cout << codArts[i] << "\t\t" << cantArts[i] << endl;

    }




    return 0;
}

int buscarIndiceArt(int cods[], int tam, int cod)
{
    for(int i = 0; i < tam; i++)
    {
        if(cods[i] == cod)
        {
            return i;
            break;
        }
    }

    return -1;
}
