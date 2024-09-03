#include <iostream>
using namespace std;

int main()
{
    int tam;
    int* vec = nullptr, numero = nullptr;

    cout << "Ingrese la cantidad de elementos: ";
    cin >> tam;

    // Pedir memoria para valor simple
    numero = new int;

    // Pedir memoria para vector
    vec = new int[tam];

    if(vec == nullptr)
    {
        cout << "No se pudo asignar memoria" << endl;
        return 1;
    }

    vec[0] = 10;

    cout << vec[0] << endl;

    delete numero;
    delete[] vec;


    cout << "Fin del programa" << endl;

    return 0;
}
