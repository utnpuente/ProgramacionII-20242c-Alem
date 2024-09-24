#include <iostream>
#include "archivoVenta.h"
#include "venta.h"
using namespace std;

int cantidadVentas()
{
    FILE*p;

    p = fopen("venta.dat", "rb");

    if(p == NULL)
    {
        return -1;
    }

    fseek(p, 0, SEEK_END);

    int bytes = ftell(p);
    int cantregistros = bytes / sizeof(Venta);

    fclose(p);

    return cantregistros;

}


bool guardarVenta(Venta &venta)
{
    FILE* p;

    p = fopen("venta.dat", "ab");

    if(p == NULL)
    {
        cout << "No se pudo abrir el archivo" << endl;
        return false;
    }

    bool pudoEscribir = fwrite(&venta, sizeof(Venta), 1, p);

    fclose(p);

    return pudoEscribir;
}

Venta leerAVenta(int indice)
{
    FILE* p;

    p = fopen("venta.dat", "rb");

    if(p == NULL)
    {
        cout << "No se pudo leer el archivo" << endl;
        return {};
    }

    fseek(p, indice * sizeof(Venta), SEEK_SET);

    Venta aux;

    fread(&aux, sizeof(Venta), 1, p);

    fclose(p);

    return aux;

}

int generarID()
{
    FILE*p;

    p = fopen("venta.dat", "rb");

    if(p == NULL)
    {
        return 1;
    }
    Venta aux;

    fseek(p, sizeof(Venta) * -1, SEEK_END);

    fread(&aux, sizeof(Venta), 1, p);

    fclose(p);

    return aux.nro + 1;

}
