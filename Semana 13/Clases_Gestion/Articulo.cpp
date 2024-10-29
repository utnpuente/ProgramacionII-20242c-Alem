#include <iostream>
#include "Articulo.h"
#include <string.h>
using namespace std;

//------------------------
// COSNTRUCTOR
//------------------------

Articulo::Articulo()
{
    _cod = -1;
    _descipcion[50];
    _precio = 0.0;
    _costo = 0.0;
    _stock = 0;
    _estado = true;
}

//------------------------
// METODOS
//------------------------

std::string Articulo::toString()
{
    return  "Cod:         " + to_string(_cod) + "\n" +
            "Descripción: " + _descipcion + "\n" +
            "Precio:      $" + to_string(_precio) + "\n" +
            "Costo:       $" + to_string(_costo) + "\n" +
            "Stock:       " + to_string(_stock) + "\n" +
            "Estado:      " + (_estado ? "Activo" : "No Activo") + "\n";

}


//------------------------
// SETTERS
//------------------------

void Articulo::setCod(int cod)
{
    _cod = cod;
}

void Articulo::setDescripcion(std::string descripcion)
{
    strcpy(_descipcion, descripcion.c_str());
}
void Articulo::setPrecio(float precio)
{
    _precio = precio;
}
void Articulo::setCosto(float costo)
{
    _costo = costo;
}
void Articulo::setStock(int stock)
{
    _stock = stock;
}
void Articulo::setEstado(bool estado)
{
    _estado = estado;
}


//------------------------
// GETTERS
//------------------------

int Articulo::getCod()
{
    return _cod;
}

std::string Articulo::getDescripcion()
{
    return _descipcion;
}

float Articulo::getPrecio()
{
    return _precio;
}

float Articulo::getCosto()
{
    return _costo;
}

int Articulo::getStock()
{
    return _stock;
}

bool Articulo::getEstado()
{
    return _estado;
}

