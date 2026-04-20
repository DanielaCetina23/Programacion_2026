#include "conversacion.h"
#include <iostream>
#include <fstream>
#include <ctime>
#include <filesystem>

namespace fs = std::filesystem;

void Conversacion::agregarMensaje(const Mensaje& mensaje) {
    mensajes.push_back(mensaje);
}

std::string Conversacion::generarRespuesta(const std::string& input) {
    // Respuesta simple (puedes cambiar luego por API)
    return "Echo: " + input;
}

void Conversacion::guardar() {
    time_t now = time(0);
    tm* ltm = localtime(&now);

    char folder[50];
    sprintf(folder, "conversaciones/%04d-%02d-%02d",
        1900 + ltm->tm_year,
        1 + ltm->tm_mon,
        ltm->tm_mday
    );

    fs::create_directories(folder);

    char filename[100];
    sprintf(filename, "%s/%02d-%02d-%02d.json",
        folder,
        ltm->tm_hour,
        ltm->tm_min,
        ltm->tm_sec
    );

    std::ofstream file(filename);

    file << "{\n  \"mensajes\": [\n";

    for (size_t i = 0; i < mensajes.size(); i++) {
        file << "    " << mensajes[i].toJSON();
        if (i < mensajes.size() - 1) file << ",";
        file << "\n";
    }

    file << "  ]\n}";
    file.close();

    std::cout << "Conversación guardada en: " << filename << std::endl;
}