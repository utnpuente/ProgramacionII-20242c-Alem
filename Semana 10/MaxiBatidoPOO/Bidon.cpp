#include <iostream>
#include <string.h>
#include "Bidon.h"

// ---------------------------
// CONSTRUCTOR
// ---------------------------

Bidon::Bidon()
{
    cod = 0;
    strcpy(sabor, "");
    capacidad = 0;
    cantidad = 0;
    puntero = new int[10];
    std::cout << "Llama a constructor 1" << std::endl;
}

Bidon::Bidon(int co, std::string s, int cap)
{
    cod = co;
    strcpy(sabor, s.c_str());
    capacidad = cap;
    cantidad = 0;
    puntero = new int[10];

    std::cout << "Llama a constructor 2" << std::endl;
}

Bidon::Bidon(std::string s)
{
    cod = 0;
    strcpy(sabor, s.c_str());
    capacidad = 0;
    cantidad = 0;
    puntero = new int[10];
    std::cout << "Llama a constructor 3" << std::endl;

}


Bidon::~Bidon()
{
    std::cout << "Eliminamos el vector dinámico" << std::endl;
    delete[] puntero;
}

// ---------------------------
// SETTERS
// ---------------------------

void Bidon::setCod(int c)
{
    cod = c;
}

void Bidon::setSabor(std::string s)
{
    strcpy(sabor, s.c_str());
}

void Bidon::setCapacidad(int c)
{
    capacidad = c;
}

void Bidon::setCantidad(int c)
{
    cantidad = c;
}

// ---------------------------
// GETTERS
// ---------------------------

int Bidon::getCod()
{
    return cod;
}

std::string Bidon::getSabor()
{
    return sabor;
}

int Bidon::getCapacidad()
{
    return capacidad;
}

int Bidon::getCantidad()
{
    return cantidad;
}


// ---------------------------
// METODOS
// ---------------------------


void Bidon::llenar()
{
    cantidad = capacidad;
}

bool Bidon::extraer(int medida)
{
    if(medida > 0 && medida <= cantidad)
//    if(cantidad - medida >= 0)
    {
        cantidad -= medida;
        return true;
    }

    return false;
}
