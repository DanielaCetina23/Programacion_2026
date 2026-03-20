#ifndef SMS_H
#define SMS_H

#include <iostream>
#include <string>
#include "notificacion.h"

class SMS : public Notificacion {
private:
    std::string numero;
    std::string mensaje;

public:
    SMS(const std::string& numero, const std::string& mensaje)
        : numero(numero), mensaje(mensaje) {}

    void enviar() override {
        std::cout << "Enviando SMS al numero: " << numero << std::endl;
        std::cout << "Mensaje: " << mensaje << std::endl;
    }
};

#endif
