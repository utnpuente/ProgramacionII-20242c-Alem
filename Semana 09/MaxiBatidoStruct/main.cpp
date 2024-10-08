#include <iostream>
using namespace std;

struct Bidon
{
    int cod;
    char sabor[40];
    int capacidad;
    int cantidad = 0;
};

struct Vaso
{
    int cod;
    int capacidad;
};

void llenarBidon(Bidon &bidon)
{
    bidon.cantidad = bidon.capacidad;
}

bool extraccionBidon(Bidon &bidon, int medida)
{
    bidon.cantidad -= medida;
}

int main()
{
    int codBatido, codVaso;

    // Bidon
    Bidon banana{1, "Banana", 20000};
    Bidon anana{2, "Anana", 35000};
    Bidon sandia{3, "Sandia", 44000};

    // Vasos
    Vaso vasos[3] {{1, 150}, {2, 200}, {3, 300}};

    // Llenarlo
    llenarBidon(banana);
    llenarBidon(anana);
    llenarBidon(sandia);

    // Cantidades
    int cantBanana = 0, cantAnana = 0, cantSandia = 0;


    cout << "Ingrese el código del batido (1: Banana, 2: Anana, 3: Sandia): ";
    cin >> codBatido;

    while(codBatido != 0)
    {
        cout << "Ingrese el código del vaso (1: 150ml, 2: 200ml, 3: 300ml): ";
        cin >> codVaso;

        int medidaVaso = vasos[codVaso - 1].capacidad;

        switch(codBatido)
        {
        case 1:
            // Bidon Banana
            extraccionBidon(banana, medidaVaso);
            cantBanana++;
            break;
        case 2:
            // Bidon Anana
            extraccionBidon(anana, medidaVaso);
            cantAnana++;
            break;
        case 3:
            // Bidon Sandia
            extraccionBidon(sandia, medidaVaso);
            cantSandia++;
            break;
        }

        cout << "Ingrese el código del batido: ";
        cin >> codBatido;
    }

    cout << banana.sabor << ": " << banana.cantidad << "mlts (" << cantBanana << ")" << endl;
    cout << anana.sabor << ": " << anana.cantidad << "mlts (" << cantAnana << ")" << endl;
    cout << sandia.sabor << ": " << sandia.cantidad << "mlts (" << cantSandia << ")" << endl;

    return 0;
}






