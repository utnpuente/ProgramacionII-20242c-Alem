#ifndef VENTAARCHIVO_H
#define VENTAARCHIVO_H

#include <string>
#include "Venta.h"

class VentaArchivo
{
public:
    /// CTO
    VentaArchivo();
    VentaArchivo(std::string ruta);

    /// METODOS
    bool guardar(Venta &venta);
    Venta leer(int indice);
//    void leerTodos(Venta *vec, int cant);
    int siguienteID();
    int cantidad();

private:
    std::string _ruta;
};

#endif // VENTAARCHIVO_H
