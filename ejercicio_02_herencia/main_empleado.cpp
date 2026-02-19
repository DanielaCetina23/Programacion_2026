#include <iostream>
#include "empleado_tiempo_completo.h"

int main() {
    std::cout << "=== Sistema de Gestión de Empleado ===\n\n";

    Empleado emp1("Ana López", "EMP-001", 15000.0);
    std::cout << "Empleado (clase base):\n";
    emp1.mostrarInformación();
    std::cout << std::endl;

    EmpleadoTiempoCompleto etc1;
    std::cout << "Empleado tiempo completo (constructor por defecto):\n";
    etc1.mostrarInformación();
    std::cout << std::endl;

    EmpleadoTiempoCompleto etc2("Carlos Ruiz", "EMP-002", 20000.0, 40, 2000.0);
    std::cout << "Empleado tiempo completo (constructor con parámetros):\n";
    etc2.mostrarInformación();
    std::cout << "Salario total: " << etc2.calcularSalarioTotal() << std::endl;
    std::cout << std::endl;

    etc2.actualizarBono(3000.0);
    std::cout << "Después de actualizar bono:\n";
    etc2.mostrarInformación();
    std::cout << "Salario total: " << etc2.calcularSalarioTotal() << std::endl;

    return 0;
}