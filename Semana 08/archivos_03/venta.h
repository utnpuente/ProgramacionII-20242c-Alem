#pragma once
#include "fecha.h"

struct Venta
{
    Fecha fecha;
    int nro;
    int nroArt;
    int cantidad;
};

void mostrarVenta(Venta & venta);
