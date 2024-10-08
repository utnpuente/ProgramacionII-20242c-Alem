#pragma once
#include <string>

class Bidon
{
private:
    int cod;
    char sabor[40];
    int capacidad;
    int cantidad = 0;

public:
    // Setters
    void setCod(int c);
    void setSabor(std::string s);
    void setCapacidad(int c);
    void setCantidad(int c);

    // Getters
    int getCod();

    // Metodos
    void llenar();
    bool extraccion(int medida);
};
