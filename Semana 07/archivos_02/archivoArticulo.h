#pragma once
#include "articulo.h"

bool guardarArticulo(Articulo &art);
bool modificarArticulo(Articulo &art, int indice);
Articulo leerArticulo(int indice);
int cantidadArticulos();
int buscarArticuloPorCodigo(int cod);

