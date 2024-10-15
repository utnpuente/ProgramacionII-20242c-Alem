#include <iostream>
using namespace std;

/// EMPLEADO (BASE)

class Empleado
{
private:
    int _legajo;
    string _apellido;
    string _nombre;
    string _mail;
public:
    Empleado();
    Empleado(int legajo, string apellido, string nombre, string mail);

    /// getters & setters
    string toString();
};

Empleado::Empleado()
{
    _legajo = 0;
    _apellido = "";
    _nombre = "";
    _mail = "";
}

Empleado::Empleado(int legajo, string apellido, string nombre, string mail)
{
    _legajo = legajo;
    _apellido = apellido;
    _nombre = nombre;
    _mail = mail;
}

string Empleado::toString()
{

    return "Legajo: " + to_string(_legajo) + "\nNombre: " + _nombre + "\nApellido: " + _apellido + "\nMail: " + _mail;
}

/// ASALARIADO (HIJA)

class Asalariado : public Empleado
{
private:
    float _salario;
public:
    Asalariado(int legajo, string apellido, string nombre, string mail);
    string toString();
};

Asalariado::Asalariado(int legajo, string apellido, string nombre, string mail) : Empleado(legajo, apellido, nombre, mail)
{
    _salario = 400000;
}

string Asalariado::toString()
{
    string datosADevolver = "";
    datosADevolver = Empleado::toString() + "\nSalario: $" + to_string(_salario);

    return datosADevolver;
}

/// PorHora (HIJA)

class PorHora : public Empleado
{
private:
    int _horas;
    float _valorHora;
public:
    PorHora(int legajo, string apellido, string nombre, string mail, int horas);
    string toString();

};

PorHora::PorHora(int legajo, string apellido, string nombre, string mail, int horas) : Empleado(legajo, apellido, nombre, mail)
{
    _horas = horas;
    _valorHora = 15000;
}

string PorHora::toString()
{
    string datosADevolver = "";
    datosADevolver = Empleado::toString() + "\nSalario: $" + to_string(_horas * _valorHora);

    return datosADevolver;
}

int main()
{
    Empleado e1(1, "Pedro", "Perez", "pedro@mail.com");

    Asalariado a1(2, "Roque", "Lopez", "roque@mail.com");

    PorHora h1(3, "Ana", "Gomez", "ana@gmail.com", 32);

    cout << e1.toString() << endl;

    cout << endl;

    cout << a1.toString() << endl;

    cout << endl;

    cout << h1.toString() << endl;

    Empleado empleados[3];
    empleados[0] = e1;
    empleados[1] = a1;
    empleados[2] = h1;

    return 0;
}
