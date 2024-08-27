#include <iostream>
using namespace std;

struct Docente
{
    string nombre;
    string apellido;
    int curso;
    float sueldo;
};

int main()
{
    setlocale(LC_ALL, "spanish");

//    Docente d1{};
//
//   cout << "Ingrese el nombre: " << endl;
//
//   getline(cin, d1.nombre);
//
//    cout << "Nombre: " << d1.nombre << endl;
//    cout << "Apellido: " << d1.apellido << endl;
//    cout << "Curso: " << d1.curso << endl;


    Docente docentes[5] {};

    docentes[0].nombre = "Pedro";
    cout << docentes[0].nombre <<endl;



    return 0;
}
