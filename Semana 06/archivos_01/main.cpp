#include <iostream>
#include "articulo.h"
#include "menu.h"
#include <cstdio>
using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");

//    mostrarMenu();

    // ESCRITURA

//    Articulo art = {123, "Manzana", 1500};
    //Articulo art = {321, "Pera", 1200};
//
//    FILE* p;
//
//    p = fopen("articulo.dat", "ab");
//
//    if(p == NULL)
//    {
//        cout << "No se pudo abrir el archivo" << endl;
//        return 1;
//    }
//
//    fwrite(&art, sizeof(Articulo), 1, p);
//
//    fclose(p);

    // LECTURA

    Articulo artL;

    FILE*p;
    p = fopen("articulo.dat", "rb");

    if(p == NULL)
    {
        cout << "No se pudo abrir el archivo" << endl;
        return 1;
    }
    int leyo;

    while(fread(&artL, sizeof(Articulo), 1, p) != 0)
    {
        mostrarArticulo(artL);
        cout << endl;
    }

    fclose(p);


    return 0;
}



//    cout << sizeof(Articulo);
//    char nombre[50]; // 'P', 'e', 'd', 'r', 'o', '\0'
//
//    cin.getline(nombre, 50);
//
//    cout << "Nombre: " << nombre << endl;

