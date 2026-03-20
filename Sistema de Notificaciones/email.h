#ifndef EMAIL_H
#define EMAIL_H

#include <iostream>
#include <string>
#include "notificacion.h"

class Email : public Notificacion {
private:
	std::string destinatario;
	std::string asunto;
	std::string mensaje;

public:
	Email(const std::string& destinatario, const std::string& asunto, const std::string& mensaje)
		: destinatario(destinatario), asunto(asunto), mensaje(mensaje) {}

	void enviar() override {
		std::cout << "Enviando email a: " << destinatario << std::endl;
		std::cout << "Asunto: " << asunto << std::endl;
		std::cout << "Mensaje: " << mensaje << std::endl;
	}
};

#endif