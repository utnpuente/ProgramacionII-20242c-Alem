#pragma once
#include "articulo.h"

int cantidadArticulos();
bool guardarArticulo(Articulo &art);
Articulo leerArticulo(int indice);
int buscarArticuloPorCodigo(int cod);
bool modificarArticulo(Articulo &art, int indice);

