#ifndef PUSH_H
#define PUSH_H

#include <iostream>
#include <string>
#include "notificacion.h"

class Push : public Notificacion {
private:
    std::string dispositivo;
    std::string titulo;
    std::string mensaje;

public:
    Push(const std::string& dispositivo, const std::string& titulo, const std::string& mensaje)
        : dispositivo(dispositivo), titulo(titulo), mensaje(mensaje) {}

    void enviar() override {
        std::cout << "Enviando notificacion push a: " << dispositivo << std::endl;
        std::cout << "Titulo: " << titulo << std::endl;
        std::cout << "Mensaje: " << mensaje << std::endl;
    }
};

#endif
