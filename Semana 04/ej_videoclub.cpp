/*
Un local de Blockbuster dispone de los Registros de Alquileres de sus socios. Cada registro está dado por los siguientes datos:

    Nro de Socio (1 a 1000)
    Nombre del Socio
    Nro. de Película (1 a 50)
    Días de Alquiler
    Día
    Mes

Este lote finaliza con un registro de Socio igual a cero.

Se dispone además de un Catálogo de las Películas disponibles. Cada Registro consta de los siguientes datos:

    Nro. de Película (1 a 50)
    Categoría ('E' Estreno, 'C', Clásica, 'I' Infantil, 'T' Terror)
    Título
    Duración
    Año Lanzamiento
    Precio Alquiler

El Precio del Alquiler es por día.

Se pide resolver.

    a) Total recaudado por cada Categoría de Película.
    b) Cantidad de películas alquiladas por Socio.
    c) La Película que estuvo más días alquilada.
    d) Cantidad de Películas alquiladas por Categoría por cada socio
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

    cout << "Ingrese el número de socio: ";
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
        // a) Total recaudado por cada Categoría de Película.

        // Indice de la película
        indicePelicula = buscarIndice(peliculas_nro, PELICULAS, nroPelicula);
        // Vector de precio
        precioPelicula = peliculas_precio[indicePelicula];
        // Vector de categoria
        categoriaPelicula = peliculas_cat[indicePelicula];

        // diasAlquiler * precio -> recaudación
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
        cout << "Ingrese el número de socio: ";
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



