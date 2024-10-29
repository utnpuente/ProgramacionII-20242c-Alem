#ifndef ARTICULOARCHIVO_H
#define ARTICULOARCHIVO_H

#include <string>
#include "Articulo.h"

class ArticuloArchivo
{
public:
    /// CTO
    ArticuloArchivo();
    ArticuloArchivo(std::string ruta);

    /// Metodos
    bool guardar(Articulo &art);
//    void guardarTodos(Articulo *art, int cantidad);
    int buscarIndice(int cod);
    Articulo leer(int indice);
//    void leerTodo(Articulo* vec, int cantRegistros);
    bool modificar(Articulo &art, int indice);
    int cantidad();

private:
    std::string _ruta;
};


#endif // ARTICULOARCHIVO_H
