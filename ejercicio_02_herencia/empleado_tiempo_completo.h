#ifndef EMPLEADO_TIEMPO_COMPLETO_H
#define EMPLEADO_TIEMPO_COMPLETO_H

#include "empleado.h"

class EmpleadoTiempoCompleto : public Empleado {
private:
    int horasSemanales;
    float bono;

public:
    // Constructor por defecto
    EmpleadoTiempoCompleto();

    // Constructor con parámetros
    EmpleadoTiempoCompleto(std::string nombre, std::string id, float salarioBase, int horasSemanales, float bono);

    // Setters 
    void actualizarHorasSemanales(int horas);
    void actualizarBono(float bono);

    // Getters 
    int obtenerHorasSemanales() const;
    float obtenerBono() const;

    // Sobrescritura
    void mostrarInformación() const;

    // Calcular salario total
    float calcularSalarioTotal() const;
};

#endif