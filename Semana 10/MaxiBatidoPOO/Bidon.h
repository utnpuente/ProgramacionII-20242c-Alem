#pragma once
#include <string>

class Bidon
{
private:
    int cod;
    char sabor[40];
    int capacidad;
    int cantidad;
    int* puntero;

public:
    // Constructor
    Bidon();
    Bidon(int co, std::string s, int cap);
    Bidon(std::string s);

    // Destructores
    ~Bidon();

    // Setters
    void setCod(int c);
    void setSabor(std::string s);
    void setCapacidad(int c);
    void setCantidad(int c);

    // Getters
    int getCod();
    std::string getSabor();
    int getCapacidad();
    int getCantidad();

    // Metodos
    void llenar();
    bool extraer(int medida);
};
