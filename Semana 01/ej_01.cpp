/*
    Cargar las notas de 10 alumnos en 5 materias de la TUP.

    El programa debe listar:

    - Por cada materia: La cantidad de alumnos aprobados.
    - Los números de alumnos (1 al 10) que hayan aprobado todaslas materias.

     Nota mayor a 6 para aprobar.

*/

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");

    const int ALUMNOS = 10;
    const int MATERIAS = 5;
    int notas[ALUMNOS][MATERIAS]{};

    // Cargar la nota
    cout << "CARGAR NOTAS" << endl;
    for(int alumno = 0; alumno < ALUMNOS; alumno++)
    {
        cout << "ALUMNO N° " << alumno + 1 << endl;

        for(int materia = 0; materia < MATERIAS; materia++)
        {
            cout << "Nota de la materia " << materia + 1 << ": ";
            cin >> notas[alumno][materia];
        }

        cout << "-----------------" << endl;

    }

    //Mostrar la nota
//    for(int alumno = 0; alumno < ALUMNOS; alumno++)
//    {
//        cout << "ALUMNO N° " << alumno + 1 << endl;
//
//        for(int materia = 0; materia < MATERIAS; materia++)
//        {
//            cout << "Nota de la materia " << materia + 1 << ": " << notas[alumno][materia] << endl;
//        }
//
//        cout << "-----------------" << endl;
//
//    }
//

    //PUNTO A
    for(int materia = 0; materia < MATERIAS; materia++)
    {
        int aprobado = 0;

        for(int alumno = 0; alumno < ALUMNOS; alumno++)
        {
            if(notas[alumno][materia] >= 6)
            {
                aprobado++;
            }
        }

        cout << "La cantidad de alumnos aprobados para la materia " << materia + 1 << " es de " << aprobado << endl;
    }

    //PUNTO B
    for(int alumno = 0; alumno < ALUMNOS; alumno++)
    {
        bool aproboTodas = true;

        for(int materia = 0; materia < MATERIAS; materia++)
        {
            if(notas[alumno][materia] < 6)
            {
                aproboTodas = false;
                break;
            }
        }

        if(aproboTodas)
            cout << "El alumno " << alumno + 1 << " aprobó todas las materias " << endl;
    }


    return 0;
}
