#include <iostream>
#include "custom_stack.h"

using namespace std;

int main() {
    
    CustomStack pila;

    pila.push(1);
    pila.push(2);
    pila.push(3);

    cout << "Tamaño de la pila: " << pila.size() << endl;

    cout << "Elemento en el tope: " << pila.top() << endl;

    pila.pop();

    cout << "Nuevo tope: " << pila.top() << endl;

    cout << "Tamaño actual: " << pila.size() << endl;

    if (pila.empty()) {
        cout << "La pila esta vacia" << endl;
    } else {
        cout << "La pila tiene elementos" << endl;
    }

    return 0;
}