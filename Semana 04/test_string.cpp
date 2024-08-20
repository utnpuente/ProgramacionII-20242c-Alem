#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");

    int numero;
    string nombre;
    string apellido;

    cout << "Numero: ";
    cin >> numero;
    cin.ignore();
    cout << "Nombre: ";
    getline(cin, nombre);
    cout << "Apellido: ";
    getline(cin, apellido);

    cout << numero << endl;
    cout << nombre << endl;
    cout << apellido << endl;

    return 0;
}
