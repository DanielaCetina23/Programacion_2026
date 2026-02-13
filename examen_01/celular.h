#ifndef CELULAR_H
#define CELULAR_H

#include <string>

class Celular {
private:
    std::string marca;
    std::string modelo;
    int bateria;
    double precio;
    bool encendido;

public:
    // Constructor 
    Celular(std::string m, std::string mod, int bat, double p);

    // Métodos
    void encender();
    void apagar();
    void mostrarInfo();
};

#endif