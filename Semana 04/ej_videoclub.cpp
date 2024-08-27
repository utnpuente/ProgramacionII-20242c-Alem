/*
Un local de Blockbuster dispone de los Registros de Alquileres de sus socios. Cada registro est� dado por los siguientes datos:

    Nro de Socio (1 a 1000)
    Nombre del Socio
    Nro. de Pel�cula (1 a 50)
    D�as de Alquiler
    D�a
    Mes

Este lote finaliza con un registro de Socio igual a cero.

Se dispone adem�s de un Cat�logo de las Pel�culas disponibles. Cada Registro consta de los siguientes datos:

    Nro. de Pel�cula (1 a 50)
    Categor�a ('E' Estreno, 'C', Cl�sica, 'I' Infantil, 'T' Terror)
    T�tulo
    Duraci�n
    A�o Lanzamiento
    Precio Alquiler

El Precio del Alquiler es por d�a.

Se pide resolver.

    a) Total recaudado por cada Categor�a de Pel�cula.
    b) Cantidad de pel�culas alquiladas por Socio.
    c) La Pel�cula que estuvo m�s d�as alquilada.
    d) Cantidad de Pel�culas alquiladas por Categor�a por cada socio
 */

#include <iostream>
using namespace std;

int buscarIndice(int cods[], int tam, int cod);

int main()
{
    setlocale(LC_ALL, "spanish");

    const int CATEGORIAS = 4;
    const int PELICULAS = 50;

    int peliculas_nro[PELICULAS];
    char peliculas_cat[PELICULAS];
    string peliculas_titulo[PELICULAS];
    int peliculas_duracion[PELICULAS];
    int peliculas_anios[PELICULAS];
    float peliculas_precio[PELICULAS];

    for(int i = 0; i < PELICULAS; i++)
    {
        cin >> peliculas_nro[i];
        cin >> peliculas_cat[i];
        cin.ignore();
        getline(cin, peliculas_titulo[i]);
        cin >> peliculas_duracion[i];
        cin >> peliculas_anios[i];
        cin >> peliculas_precio[i];
        cout << "-------------------" << endl;
    }

    int nroSocio;
    string nombreSocio;
    int nroPelicula;
    int diasAlquiler;
    int dia;
    int mes;

    int indicePelicula;
    float precioPelicula;
    char categoriaPelicula;
    float recaudacionPelicula;

    float recaudacionCategorias[CATEGORIAS] {};

    cout << "Ingrese el n�mero de socio: ";
    cin >> nroSocio;

    while(nroSocio != 0)
    {
        cin.ignore();
        cout << "Ingrese el nombre del socio: ";
        getline(cin, nombreSocio);
        cout << "Ingrese el numero de la pelicula: ";
        cin >> nroPelicula;
        cout << "Ingrese los dias de alquiler: ";
        cin >> diasAlquiler;
        cout << "Ingrese el dia: ";
        cin >> dia;
        cout << "Ingrese el mes: ";
        cin >> mes;

        // PROCESO
        // a) Total recaudado por cada Categor�a de Pel�cula.

        // Indice de la pel�cula
        indicePelicula = buscarIndice(peliculas_nro, PELICULAS, nroPelicula);
        // Vector de precio
        precioPelicula = peliculas_precio[indicePelicula];
        // Vector de categoria
        categoriaPelicula = peliculas_cat[indicePelicula];

        // diasAlquiler * precio -> recaudaci�n
        recaudacionPelicula = diasAlquiler * precioPelicula;

        // Categoria -> acumular el monto recaudado en un elemento de un vector de 4
        switch(categoriaPelicula)
        {
        case 'E':
            recaudacionCategorias[0] +=  recaudacionPelicula;
            break;
        case 'C':
            recaudacionCategorias[1] +=  recaudacionPelicula;
            break;
        case 'I':
            recaudacionCategorias[2] +=  recaudacionPelicula;
            break;
        case 'T':
            recaudacionCategorias[3] +=  recaudacionPelicula;
            break;
        }

        cout << "----------------------------" << endl;
        cout << "Ingrese el n�mero de socio: ";
        cin >> nroSocio;
    }

    // MOSTRAR PUNTO A
    char catLetras[4]{'E', 'C', 'I', 'T'};

    cout << "CATEGORIA\t\tRECAUDACION"<<endl;
    for(int i = 0; i < CATEGORIAS; i++)
    {
        cout << catLetras[i] << "\t\t$" << recaudacionCategorias[i] << endl;
    }


    return 0;
}

int buscarIndice(int cods[], int tam, int cod)
{
    int indice = -1;

    for(int i = 0; i < tam; i++)
    {
        if(cods[i] == cod)
        {
            indice = i;
        }
    }

    return indice;
}



