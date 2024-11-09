#include <iostream>
using namespace std;

class Vector
{
    int* vec;
    int index;

public:
    Vector()
    {
        index = 0;
        vec = new int[index];
    }

    ~Vector()
    {
        delete [] vec;
    }

    pushback(int num)
    {
        int* aux = new int[index  + 1];

        for(int i = 0; i < index; i++)
        {
            aux[i] = vec[i];
        }

        aux[index] = num;

        delete[] vec;

        index++;

        vec = aux;

    }

//    void operator[]
};

int* pushback(int* vec, int& cantidad, int num);

int main()
{
    setlocale(LC_ALL, "spanish");

//    Vector vec1;
//
//    cout << vec1[0];

    int n;
    int cant = 0;
    int* vec = new int[cant];

    cout << "Ingrese un número:";
    cin >> n;

    vec = pushback(vec, cant, n);

    cout << "Ingrese un número:";
    cin >> n;

    vec = pushback(vec, cant, n);

    cout << "Ingrese un número:";
    cin >> n;

    vec = pushback(vec, cant, n);

    for(int i = 0; i < cant; i++)
    {
        cout << vec[i] << ", ";
    }

    cout << "Ingrese un número:";
    cin >> n;

    vec = pushback(vec, cant, n);

    cout << "Ingrese un número:";
    cin >> n;

    vec = pushback(vec, cant, n);

    for(int i = 0; i < cant; i++)
    {
        cout << vec[i] << ", ";
    }

    return 0;
}

int* pushback(int* vec, int &cantidad, int num)
{
    int* aux = new int[cantidad  + 1];

    for(int i = 0; i < cantidad; i++)
    {
        aux[i] = vec[i];
    }

    aux[cantidad] = num;

    delete[] vec;

    cantidad++;

    return aux;
}
