#ifndef ARTICULO_H
#define ARTICULO_H

#include <string>


class Articulo
{
public:
    Articulo();

    /// Getters & Setters
    void setCod(int cod);
    void setDescripcion(std::string);
    void setPrecio(float precio);
    void setCosto(float costo);
    void setStock(int stock);
    void setEstado(bool estado);

    int getCod();
    std::string getDescripcion();
    float getPrecio();
    float getCosto();
    int getStock();
    bool getEstado();

    /// Metodos
    std::string toString();

private:
    int _cod;
    char _descipcion[50];
    float _precio;
    float _costo;
    int _stock;
    bool _estado;
};

#endif // ARTICULO_H
