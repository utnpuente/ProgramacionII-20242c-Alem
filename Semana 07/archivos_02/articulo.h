#pragma once
#include <string>

#define CARACTER_DESC 50

//struct MarcaDTO
//{
//    int nro;
//    char descripcion[50];
//    int codMarca;
//};
//
//struct Marca
//{
//    int nro;
//    std::string descripcion;
//};
//
//struct ArticuloDTO
//{
//    int cod;
//    char descripcion[40];
//    int codMarca;
//};

struct Articulo
{
    int cod;
    char descipcion[50];
    float precio;
};

void mostrarArticulo(const Articulo &articulo);
Articulo cargarArticulo();




