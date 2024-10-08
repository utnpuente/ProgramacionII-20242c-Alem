#include <iostream>
#include "Bidon.h"
using namespace std;

void Bidon::setCod(int c)
{
    cod = c;
}

int Bidon::getCod()
{
    return cod;
}

void Bidon::llenar()
{
    cantidad = capacidad;
}
