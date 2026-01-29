#include <iostream>
#include "estudiante.h"

using namespace std;

int main() {
    cout << "=== Sistema de Gestión de Estudiante ===" << endl << endl;

    // Constructor por defecto 
    Estudiante estudiante1;
    cout << "Estudiante 1 (constructor por defecto):" << endl;
    estudiante1.mostrarInformacionCompleta();
    cout << endl;

    // Actualizar datos
    estudiante1.actualizarNombre("María Daniela Cetina Alcocer");
    estudiante1.actualizarCodigo("EST-2025-001");
    estudiante1.actualizarEdad(21);
    estudiante1.actualizarPromedio(8.2);
    estudiante1.actualizarActivo(true);

    cout << "Estudiante 1 después de actualizar:" << endl;
    estudiante1.mostrarInformacionCompleta();
    estudiante1.calcularEstadoAcademico();
    cout << endl;

    // Constructor con parámetros
    Estudiante estudiante2("Selmy Naomi Canul Uicab", "EST-2025-002", 21, 9.3, true);

    cout << "Estudiante 2 (constructor con parámetros):" << endl;
    estudiante2.mostrarInformacionCompleta();
    estudiante2.calcularEstadoAcademico();
    cout << endl;

    //Incrementar edad
    cout << "Incrementando edad del estudiante 2:" << endl;
    estudiante2.incrementarEdad();
    estudiante2.mostrarEdad();
    cout << endl;

    // Probar validación
    cout << "Intentando actualizar promedio con valor inválido:" << endl;
    estudiante2.actualizarPromedio(15.0);
    estudiante2.mostrarPromedio();
    cout << endl;

    return 0;
}