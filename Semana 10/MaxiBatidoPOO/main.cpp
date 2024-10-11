#include <iostream>
#include "Bidon.h"
using namespace std;

// TODO:
// Terminar Métodos: Llenar y Extraer : OK
// Terminar Getters y Setters : OK
// Valores por default
// Inicialización con valores

// 4 ELEMENTOS
// - ABSTRACCION
// - ENCAPSULAMIENTO
// - HERENCIA
// - POLIMORFISMO

// CONSTRUCTOR
    // PUBLICO
    // NO RETORNA NADA
    // SE TIENE QUE LLMAR IGUAL QUE LA CLASE
    // SE LLAMA SOLO


int main()
{
    Bidon bidon; // Se ejecuto un metodo
    Bidon bidon1(1, "Sandia", 22000);
    Bidon bidon2("Melon");

    cout << "---------- 1 ---------" << endl;
    cout << "Codigo : " << bidon.getCod() << endl;
    cout << "Capacidad : " << bidon.getCapacidad() << endl;
    cout << "Nombre : " << bidon.getSabor() << endl;
    cout << "Cantidad : " << bidon.getCantidad() << endl;
    cout << "---------- 1 ---------" << endl;
    cout << "Codigo : " << bidon1.getCod() << endl;
    cout << "Capacidad : " << bidon1.getCapacidad() << endl;
    cout << "Nombre : " << bidon1.getSabor() << endl;
    cout << "Cantidad : " << bidon1.getCantidad() << endl;


    bidon.setCod(2);
    bidon.setCapacidad(40000);
    bidon.setSabor("Banana");

    // Lenar
    bidon.llenar();

//    bidon.cantidad = bidon.capacidad;
//    bidon.cantidad -= 150;

    cout << "---------- 2 ---------" << endl;
    cout << "Codigo : " << bidon.getCod() << endl;
    cout << "Capacidad : " << bidon.getCapacidad() << endl;
    cout << "Nombre : " << bidon.getSabor() << endl;
    cout << "Cantidad : " << bidon.getCantidad() << endl;

    bidon.extraer(40000);

    cout << "---------- 3 ---------" << endl;
    cout << "Codigo : " << bidon.getCod() << endl;
    cout << "Capacidad : " << bidon.getCapacidad() << endl;
    cout << "Nombre : " << bidon.getSabor() << endl;
    cout << "Cantidad : " << bidon.getCantidad() << endl;

    return 0;
}
