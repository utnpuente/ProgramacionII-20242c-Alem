#include <iostream>
#include "articulo.h"
#include "archivoArticulo.h"
using namespace std;

// Funcion que guarda un articulo en archivo
bool guardarArticulo(Articulo &art)
{
    FILE* p;

    p = fopen("articulo.dat", "ab");

    if(p == NULL)
    {
        cout << "No se pudo abrir el archivo" << endl;
        return false;
    }

    bool pudoEscribir = fwrite(&art, sizeof(Articulo), 1, p);

    fclose(p);

    return pudoEscribir;
}

// Funcion que retorna un registro leido según el índice
Articulo leerArticulo(int indice)
{
    FILE* p;

    p = fopen("articulo.dat", "rb");

    if(p == NULL)
    {
        cout << "No se pudo leer el archivo" << endl;
        return {};
    }

    fseek(p, indice * sizeof(Articulo), SEEK_SET);

    Articulo aux;

    fread(&aux, sizeof(Articulo), 1, p);

    fclose(p);

    return aux;
}

// Funcion que retorna la cantidad de registros
int cantidadArticulos()
{
    FILE*p;

    p = fopen("articulo.dat", "rb");

    if(p == NULL)
    {
        return -1;
    }

    fseek(p, 0, SEEK_END);

    int bytes = ftell(p);
    int cantregistros = bytes / sizeof(Articulo);

    fclose(p);

    return  cantregistros;
}

// Guncion que buscar registros por codigo
int buscarArticuloPorCodigo(int cod)
{
    int cantReg = cantidadArticulos();
    int indice = -1;

    for(int i = 0; i < cantReg; i++)
    {
        Articulo aux = leerArticulo(i);

        if(aux.cod == cod)
        {
            indice = i;
            break;
        }
    }

    return indice;
}

// Funcion que pisa en un indice que le pasemos un nuevo registro
bool modificarArticulo(Articulo &art, int indice)
{
    FILE*p;
    p = fopen("articulo.dat", "rb+");

    if(p == NULL)
    {
        cout << "No se pudo abrir el archivo" << endl;
        return 0;
    }

    fseek(p, indice * sizeof(Articulo), SEEK_SET);

    bool pudoEscribir = fwrite(&art, sizeof(Articulo), 1, p);

    fclose(p);

    return pudoEscribir;
}




