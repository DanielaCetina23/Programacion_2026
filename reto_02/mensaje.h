#ifndef MENSAJE_H
#define MENSAJE_H

#include <string>

class Mensaje {
public:
    std::string rol;
    std::string contenido;

    Mensaje(std::string rol, std::string contenido);

    std::string toJSON() const;
};

#endif