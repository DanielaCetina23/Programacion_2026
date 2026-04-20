#include <iostream>
#include "conversacion.h"

int main() {
    Conversacion chat;
    std::string input;

    std::cout << "Chat iniciado (escribe 'salir' para terminar)\n";

    while (true) {
        std::cout << "Tú: ";
        std::getline(std::cin, input);

        if (input == "salir") break;

        chat.agregarMensaje(Mensaje("usuario", input));

        std::string respuesta = chat.generarRespuesta(input);
        std::cout << "Bot: " << respuesta << std::endl;

        chat.agregarMensaje(Mensaje("bot", respuesta));
    }

    chat.guardar();

    return 0;
} 