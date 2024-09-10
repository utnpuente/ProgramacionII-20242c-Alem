#pragma once
#include <string>

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

void cargarArticulos();
void listarArticulos();
void mostrarArticulo(const Articulo &articulo);





