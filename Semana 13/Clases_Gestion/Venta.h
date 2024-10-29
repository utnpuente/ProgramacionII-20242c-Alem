#ifndef VENTA_H
#define VENTA_H

#include "Fecha.h"

class Venta
{
public:
    /// CTO
    Venta();

    /// GETTERS & SETTERS
    int getNro();
    int getCod();
    int getCantidad();
    float getMonto();
    Fecha getFecha();

    void setNro(int nro);
    void setFecha(Fecha fecha);
    void setCod(int cod);
    void setCantidad(float cantidad);
    void setMonto(float monto);

private:
    Fecha _fecha;
    int _nro;
    int _codArt;
    int _cantidad;
    float _monto;
//    bool eliminada;
};

#endif // VENTA_H
