#include <iostream>
#include "VentaArchivo.h"
#include "Venta.h"
using namespace std;

//------------------------
// CONSTRUCTOR
//------------------------

VentaArchivo::VentaArchivo()
{
    _ruta = "venta.dat";
}

VentaArchivo::VentaArchivo(string ruta)
{
    _ruta = ruta;
}

//------------------------
// METODOS
//------------------------

int VentaArchivo::cantidad()
{
    FILE*p;

    p = fopen(_ruta.c_str(), "rb");

    if(p == NULL)
    {
        return -1;
    }

    fseek(p, 0,SEEK_END);

    int bytes = ftell(p);
    int cantReg = bytes / sizeof(Venta);

    fclose(p);

    return cantReg;
}

bool VentaArchivo::guardar(Venta &venta)
{
    FILE* p;

    p = fopen(_ruta.c_str(), "ab");

    if(p == NULL)
    {
        return false;
    }

    bool pudoEscribir = fwrite(&venta, sizeof(Venta), 1, p);

    fclose(p);

    return pudoEscribir;
}

Venta VentaArchivo::leer(int indice)
{
    FILE* p;

    p = fopen(_ruta.c_str(), "rb");

    if(p == NULL)
    {
        return {};
    }

    fseek(p, indice * sizeof(Venta), SEEK_SET);

    Venta aux;

    fread(&aux, sizeof(Venta), 1, p);

    fclose(p);

    return aux;
}

int VentaArchivo::siguienteID()
{
    FILE* p;

    p = fopen(_ruta.c_str(), "rb");

    if(p==NULL)
    {
        return 1;
    }

    fseek(p, -sizeof(Venta), SEEK_END);

    Venta aux;

    fread(&aux, sizeof(Venta), 1, p);

    fclose(p);

    return aux.getNro() + 1;
}

//void VentaArchivo::leerTodos(Venta *vec, int cant)
//{
//
//    FILE* p;
//
//    p = fopen(_ruta.c_str(), "rb");
//
//    if(p==NULL)
//    {
//        return;
//    }
//
//    fread(vec, sizeof(Venta), cant, p);
//
//    fclose(p);
//}
