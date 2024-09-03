#include <iostream>
using namespace std;

int main()
{
    int numero = 10;
    int &referencia = numero;

    int* puntero;

    puntero = &numero;

    cout << "El contenido de la variable numero es: " << numero << endl;
    cout << "La direccion de memoria  de la variable numero es: " << &numero << endl;
    cout << "El contenido de la variable puntero es: " << puntero << endl;
    cout << "El contenido de la variable a la que apunta el puntero es: " << *puntero << endl;
    cout << "La dirección de memoria de la variable puntero es " << &puntero << endl;

    *puntero = 20;

    cout << "El contenido de la variable numero modificada es: " << numero << endl;

    cout << endl;

    cout << "El contenido de la variable referencia es: " << referencia << endl;
    cout << "La dirección de memoria de la variable referencia es: "<< &referencia << endl;

    return 0;
}
