#include <iostream>
#include "Venta.h"
#include "Fecha.h"
using namespace std;

//------------------------
// CONSTRUCTOR
//------------------------

Venta::Venta()
{
    //ctor
}

//------------------------
// GETTERS
//------------------------

int Venta::getNro()
{
    return _nro;
}

int Venta::getCod()
{
    return _codArt;
}

int Venta::getCantidad()
{
    return _cantidad;
}

float Venta::getMonto()
{
    return _monto;
}

Fecha Venta::getFecha()
{
    return _fecha;
}

//------------------------
// SETTERS
//------------------------

void Venta::setNro(int nro)
{
    _nro = nro;
}

void Venta::setFecha(Fecha fecha)
{
    _fecha.setDia(fecha.getDia());
    _fecha.setMes(fecha.getMes());
    _fecha.setAnio(fecha.getAnio());
}

void Venta::setCod(int cod)
{
    _codArt = cod;
}

void Venta::setCantidad(float cantidad)
{
    _cantidad = cantidad;
}

void Venta::setMonto(float monto)
{
    _monto = monto;
}
