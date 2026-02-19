#include "empleado.h"

// Constructor por defecto 
Empleado::Empleado() : nombre(""), id(""), salarioBase(0.0f) {}

// Constructor con parámetros
Empleado::Empleado(std::string nombre, std::string id, float salarioBase) {
    this->nombre = nombre;
    this->id = id;
    this->salarioBase = salarioBase;
}

// Setters 
void Empleado::actualizarNombre(std::string nombre) {
    this->nombre = nombre;
}

void Empleado::actualizarId(std::string id) {
    this->id = id;
}

void Empleado::actualizarSalarioBase(float salario) {
    this->salarioBase = salario;
}

// Getters 
std::string Empleado::obtenerNombre() const {
    return nombre;
}

std::string Empleado::obtenerId() const {
    return id;
}

float Empleado::obtenerSalarioBase() const {
    return salarioBase;
}

// Mostrar información 
void Empleado::mostrarInformación() const {
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "ID: " << id << std::endl;
    std::cout << "Salario Base: " << salarioBase << std::endl;
}