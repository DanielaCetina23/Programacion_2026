#include "mensaje.h"

Mensaje::Mensaje(std::string rol, std::string contenido) {
    this->rol = rol;
    this->contenido = contenido;
}

std::string Mensaje::toJSON() const {
    return "{ \"rol\": \"" + rol + "\", \"contenido\": \"" + contenido + "\" }";
}