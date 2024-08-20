/*
    Un negocio de venta de libros cuenta con los siguientes lotes de informaci�n:
    Un primer lote cuenta con los datos de los libros que este negocio vende. Cada
    registro contiene:

    - C�digo de Libro (4 n�meros no correlativos)
    - Tema (1 a 20)
    - Precio

    Este lote cuenta con un total de 200 registros y se ingresa desordenado.

    - nroEmpledo
    - nombre
    - apellido

    Un segundo lote con los datos de las ventas del �ltimo mes. Cada registro
    contiene los siguientes datos:

    - C�digo de Libro (4 n�meros no correlativos)
    - N�mero de Vendedor (3 n�meros no correlativos)
    - D�a de la venta (1 a 31)

    Puede haber varios registros para el mismo c�digo de libro y para el mismo
    vendedor. Este lote finaliza con un registro con c�digo de libro igual a cero.

    Se pide determinar e informar:

    a) Indicar por separado la recaudaci�n total para cada uno de los 31 d�as.
    b) Cu�l es el n�mero de vendedor con mayor recaudaci�n total por ventas.
    c) Cu�l es el n�mero de tema m�s vendido
*/

#include <iostream>
using namespace std;

// FUNCIONES
int buscarIndice(int vCod[], int tam, int cod);

int main()
{
    setlocale(LC_ALL, "spanish");

    // Constantes
    const int LIBROS = 200;
    const int DIAS = 31;
    const int VENDEDORES = 10;
    const int TEMAS = 20;

    // LOTE DE CARGA

    // Registro de LIBROS
    int libro_cod[LIBROS];
    int libro_tema[LIBROS];
    float libro_precio[LIBROS];

    for(int i = 0; i < LIBROS; i++)
    {
        cin >> libro_cod[i];
        cout << "Ingrese 3 nros no correlativos para el tema";
        cin >> libro_tema[i];
        cin >> libro_precio[i];
    }

    // Registro EMPLEADOS
    int empleado_cod[VENDEDORES];
    string empleado_nombre[VENDEDORES];
    string empleado_apellido[VENDEDORES];

    for(int = 0; i < VENDEDORES; i++)
    {
        cin >> empleado_cod[i];
        cin.ignore();
        getline(cin, empleado_nombre[i]);
        getline(cin, empleado_apellido[i]);
    }

    // Registro TEMa
    int tema_cod[TEMAS];
    string tema_descripcion[TEMAS];

    // cargamos los registros

    // LOTE DE PROCESO
    int codLibro;
    int nroVendedor;
    int diaVenta;

    // Estructuras de resoluci�n de los puntos
    float recaudacionDias[DIAS] {};
    float recaudacionVendedores[VENDEDORES] {};
    int acumulacionTema [TEMAS] {};

    // Indices
    int indiceLibro;
    int indiceEmpleado;

    cout << "Ingrese el c�digo del libro (4 nros no correlativos): ";
    cin >> codLibro;

    while(codLibro != 0)
    {
        cout <<"Ingrese el n�mero del vendedor (3 nros no correlativo): ";
        cin >> nroVendedor;
        cout << "Ingrese el d�a de la venta: ";
        cin >> diaVenta;

        // PROCESO
        // Indices
        indiceLibro = buscarIndice(libro_cod, LIBROS, codLibro);
        indiceEmpleado = buscarIndice(empleado_cod, VENDEDORES, nroVendedor);

        // Validar que el �ndice no sea -1

        // a) Indicar por separado la recaudaci�n total para cada uno de los 31 d�as.
        recaudacionDias[ diaVenta - 1 ] += libro_precio[indiceLibro]; // 250

        // b) Cu�l es el n�mero de vendedor con mayor recaudaci�n total por ventas.
        recaudacionVendedores[ indiceEmpleado ] += libro_precio[indiceLibro];

        // c) Cu�l es el n�mero de tema m�s vendido
        int temaCod = libro_tema[indiceLibro];
        int indiceTema; // Buscar indice (?)
        acumulacionTema[indiceTema - 1]++;

        cout << "-----------------------------" << endl;
        cout << "Ingrese el c�digo del libro: ";
        cin >> codLibro;
    }

    // RESULTADOS
    cout << "NOMBRE Y APELLIDO\t\tRECAUDACI�N" << endl;
    for(int i = 0; i < VENDEDORES; i++)
    {
        cout << empleado_nombre[i] << " " << empleado_apellido[i] << "\t\t$" << recaudacionVendedores[i];
    }

    return 0;
}

// FUNCIONES
int buscarIndice(int vCod[], int tam, int cod)
{
    int indice = -1;

    for(int i = 0; i < tam; i++)
    {
        if(vCod[i] == cod)
        {
            indice = i;
            break;
        }
    }

    return indice;
}
