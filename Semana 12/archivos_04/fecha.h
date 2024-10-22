#pragma once

struct Fecha
{
    int dia;
    int mes;
    int anio;
};

Fecha cargarFecha();
void mostrarFecha(Fecha &fecha);
