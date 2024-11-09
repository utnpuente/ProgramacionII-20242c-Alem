#include <iostream>
#include <cctype>
using namespace std;

string pasarMinuscula(string p);


int main()
{
    setlocale(LC_ALL, "spanish");

    string valorUsuario;
    string valorArchivo = "Sacapunta";

    pasarMinuscula(valorArchivo);

    cout << "Ingrese el artículo: ";
    cin >> valorUsuario;

    if(pasarMinuscula(valorUsuario) == pasarMinuscula(valorArchivo))
    {
        cout << "Son iguales" << endl;
    }
    else
    {
        cout << "No son iguales" << endl;
    }

    return 0;
}

string pasarMinuscula(string p)
{
    int cantidad = p.length();

    for(int i = 0; i < cantidad; i++)
    {
        if(isalpha(p[i]))
            p[i] = tolower(p[i]);
    }

    return p;
}
