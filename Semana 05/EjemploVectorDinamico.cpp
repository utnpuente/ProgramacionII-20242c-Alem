#include <iostream>
using namespace std;

struct Socios
{
    int nro;
    string nombre;
    string apellido;

};

int main()
{
    Socios* vSocios = nullptr;
    int tamSocios;

    cout << "Ingrese la cantidad de socios a cargar: ";
    cin >> tamSocios;


    vSocios = new Socios[tamSocios];

    if(vSocios == nullptr)
    {
        return 1;
    }

    for(int i = 0; i < tamSocios; i++)
    {
        cout << "Ingrese número del socio: ";
        cin >> vSocios[i].nro;

        cin.ignore();

        cout << "Ingrese nombre del socio: ";
        getline(cin, vSocios[i].nombre);
        cout << "Ingrese apellido del socio: ";
        getline(cin, vSocios[i].apellido);

        cout << "---------------------------" << endl;

    }

    cout << "NRO\t\tNOMBRE\t\tAPELLIDO" << endl;
    for(int i = 0; i < tamSocios; i++)
    {
        cout << vSocios[i].nro << "\t\t" << vSocios[i].nombre << "\t\t" << vSocios[i].apellido << endl;
    }

    delete[] vSocios;

    return 0;
}
