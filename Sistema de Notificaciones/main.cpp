#include <iostream>
#include <vector>
#include <memory>

#include "notificacion.h"
#include "email.h"
#include "sms.h"
#include "push.h"

int main() {
    std::vector<std::unique_ptr<Notificacion>> notificaciones;

    notificaciones.push_back(std::make_unique<Email>(
        "usuario@correo.com",
        "Bienvenido",
        "Tu cuenta fue creada correctamente."
    ));

    notificaciones.push_back(std::make_unique<SMS>(
        "+573001112233",
        "Tu codigo de verificacion es 482910"
    ));

    notificaciones.push_back(std::make_unique<Push>(
        "iPhone 14",
        "Nueva promocion",
        "Tienes 20% de descuento en tu proxima compra."
    ));

    std::cout << "=== Sistema de Notificaciones ===" << std::endl;

    for (const auto& notificacion : notificaciones) {
        std::cout << "-------------------------------" << std::endl;
        notificacion->enviar();
    }

    std::cout << "-------------------------------" << std::endl;
    std::cout << "Todas las notificaciones fueron enviadas." << std::endl;

    return 0;
}
