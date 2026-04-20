#ifndef CONVERSACION_H
#define CONVERSACION_H

#include <vector>
#include "mensaje.h"

class Conversacion {
private:
    std::vector<Mensaje> mensajes;

public:
    void agregarMensaje(const Mensaje& mensaje);
    std::string generarRespuesta(const std::string& input);
    void guardar();
};

#endif 