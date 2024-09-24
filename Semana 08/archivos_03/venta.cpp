#include <iostream>
#include "venta.h"
#include "archivoVenta.h"
#include "fecha.h"
using namespace std;

void mostrarVenta(Venta & venta)
{
    mostrarFecha(venta.fecha);
    cout<< "Nro venta:      " << venta.nro << endl;
    cout<< "Nro Arts:       " << venta.nroArt << endl;
    cout << "Cantidad arts: " << venta.cantidad << endl;

}
