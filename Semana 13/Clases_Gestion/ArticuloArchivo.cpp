#include <iostream>
#include "ArticuloArchivo.h"
#include "articulo.h"

using namespace std;

//------------------------
// CONSTRUCTOR
//------------------------

ArticuloArchivo::ArticuloArchivo()
{
    _ruta = "articulo.dat";
}

ArticuloArchivo::ArticuloArchivo(string ruta)
{
    _ruta = ruta;
}

//------------------------
// NETODOS
//------------------------

int ArticuloArchivo::cantidad()
{
    FILE*p;

    p = fopen(_ruta.c_str(), "rb");

    if(p == NULL)
    {
        cout << "No se pudo abrir el archivo" << endl;
        return -1;
    }

    fseek(p, 0,SEEK_END);

    int bytes = ftell(p);
    int cantReg = bytes / sizeof(Articulo);

    fclose(p);

    return cantReg;
}

bool ArticuloArchivo::guardar(Articulo &art)
{

    FILE* p;

    p = fopen(_ruta.c_str(), "ab");

    if(p == NULL)
    {
        cout << "No se pudo abrir el archivo" << endl;
        return false;
    }

    bool pudoEscribir = fwrite(&art, sizeof(Articulo), 1, p);

    fclose(p);

    return pudoEscribir;
}

//void ArticuloArchivo::guardarTodos(Articulo* art, int cantidad)
//{
//
//    FILE* p;
//
//    p = fopen(_ruta.c_str(), "wb");
//
//    if(p == NULL)
//    {
//        return ;
//    }
//
//    bool pudoEscribir = fwrite(art, sizeof(Articulo), cantidad, p);
//
//    fclose(p);
//}

Articulo ArticuloArchivo::leer(int indice)
{
    FILE* p;

    p = fopen(_ruta.c_str(), "rb");

    if(p == NULL)
    {
        return {};
    }

    fseek(p, indice * sizeof(Articulo), SEEK_SET);

    Articulo aux;

    fread(&aux, sizeof(Articulo), 1, p);

    fclose(p);

    return aux;
}

//void ArticuloArchivo::leerTodo(Articulo vec[], int cantRegistros)
//{
//
//    FILE* p;
//
//    p = fopen(_ruta.c_str(), "rb");
//
//    if(p == NULL)
//    {
//        return;
//    }
//
//    fread(vec, sizeof(Articulo), cantRegistros, p);
//
//    fclose(p);
//}

int ArticuloArchivo::buscarIndice(int cod)
{
    int indice = - 1;

    int cant = cantidad();

    for(int i = 0; i < cant; i++)
    {
        Articulo art = leer(i);

        if(art.getCod() == cod)
        {
            indice = i;
            break;
        }
    }

    return indice;
}

bool ArticuloArchivo::modificar(Articulo &art, int indice)
{
    FILE*p;
    p = fopen(_ruta.c_str(), "rb+");

    if(p==NULL)
    {
        cout << "No se pudo abrir el archivo" <<endl;
        return false;
    }

    fseek(p, indice * sizeof(Articulo), SEEK_SET);

    bool pudoEscribir = fwrite(&art, sizeof(Articulo), 1, p);

    fclose(p);

    return pudoEscribir;
}
