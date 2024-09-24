#pragma once
#include <string>

#define CARACTER_DESC 50

struct Articulo
{
    int cod = 0;
    char descipcion[50];
    float precio = 0.0;
    float costo = 0.0;
    int stock = 0;
    bool estado = true;
};

void mostrarArticulo(const Articulo &articulo);
Articulo cargarArticulo();




