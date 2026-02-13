#include <iostream>
#include "celular.h"

using namespace std;

//Constructor
Celular::Celular(string m, string mod, int bat, double p) {
    marca = m;
    modelo = mod;
    bateria = bat;
    precio = p;
    encendido = false;    
}

// Método para encender 
void Celular::encender() {
    if (!encendido) {
        encendido = true;
        cout << "El celular se ha encendido." << endl;
    } else {
        cout << "El celular ya está encendido." << endl;
    }
}

// Método para apagar
void Celular::apagar() {
    if (encendido) {
        encendido = false;
        cout << "El celular se ha apagado." << endl;
    } else {
        cout << "El celular ya está apagado." << endl;
    }
}

// Método para mostrar información
void Celular::mostrarInfo() {
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Batería: " << bateria << endl;
    cout << "Precio: " << precio << endl;
    cout << "Estado: " << (encendido ? "Entendido" : "Apagado") << endl;
}
