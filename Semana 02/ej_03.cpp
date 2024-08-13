/*
    3) Una empresa fabrica 200 productos que son vendidos por 5 vendedores.
    La empresa quiere obtener un listado en el que figure el monto total en pesos de las ventas
    efectuadas en 2024 por cada uno de sus vendedores, mes por mes.
    Para ello dispone de un lote de registros con los siguientes datos de cada una
    de las ventas:

        ● Día (1 a 31)
        ● Mes (1 a 12)
        ● Importe ($)
        ● Código de vendedor (‘a’, ‘b’, ‘c’, ‘d’, ‘e’)

    Este lote está desordenado y cualquier vendedor puede haber vendido el mismo producto,
    en un mismo día, a diferentes clientes. El fin se indica con un registro con día
    igual a cero.
    Construya un programa C++ para resolver el problema.
*/


#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");

//    char a = 'a';
//    char b = 'b';
//    char c = 'c';
//    char d = 'd';
//    char e = 'e';
//    cout << (int)a - 97<< endl;
//    cout << (int)b - 97<< endl;
//    cout << (int)c - 97<< endl;
//    cout << (int)d - 97<< endl;
//    cout << (int)e - 97<< endl;
//
//
//    return 0;

    const int VENDEDORES = 5;
    const int MESES = 12;

    float recaudacionVendedor_x_Mes[VENDEDORES][MESES] {};

    int     dia;
    int     mes;
    float   precio;
    char    vendedor;

    int     indiceVendedor;

    cout << "Ingrese el día (1-31): ";
    cin >> dia;

    while(dia != 0)
    {
        cout << "Ingrese el mes (1-12): ";
        cin >> mes;

        cout << "Ingrese el precio: $";
        cin >> precio;

        cout << "Ingrese el vendedor (a, b, c, d, e): ";
        cin >> vendedor;

        switch(vendedor)
        {
        case 'A':
        case 'a':
            indiceVendedor = 0;
            break;
        case 'b':
            indiceVendedor = 1;
            break;
        case 'c':
            indiceVendedor = 2;
            break;
        case 'd':
            indiceVendedor = 3;
            break;
        case 'e':
            indiceVendedor = 4;
            break;
        default:
//            cout << "El vendedor es incorrecto"<<endl;
//            cout << "----------------"
//                 cout << "Ingrese el día (1-31): ";
//            cin >> dia;
//            continue;
            indiceVendedor = -1;
            break;
        }


        if(indiceVendedor == -1)
        {
            cout << "El vendedor es incorrecto"<<endl;
            cout << "----------------" << endl;
            cout << "Ingrese el día (1-31): ";
            cin >> dia;
            continue;
        }

//          recaudacionVendedor_x_Mes[indiceVendedor][mes - 1] += precio;
            recaudacionVendedor_x_Mes[(int)vendedor - 97][mes - 1] += precio;


        cout << "----------------" << endl;
        cout << "Ingrese el día (1-31): ";
        cin >> dia;

    }

    // RESULTADO
    char vendedores[5] = {'a', 'b', 'c', 'd', 'e'};
//    string meses[12] = {"Enero", "Febrero" }

    for(int i = 0; i < VENDEDORES; i++)
    {
        cout << "VENDEDOR " << vendedores[i] << endl;
        cout << "MES\t\tTOTAL"<<endl;
        cout << "------------------------" << endl;

        for(int j = 0; j < MESES; j++)
        {
            cout << j + 1 << "\t\t"<<recaudacionVendedor_x_Mes[i][j]<<endl;

        }

        cout << endl << endl;

    }


    return 0;
}
