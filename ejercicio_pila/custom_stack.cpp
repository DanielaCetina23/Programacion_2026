#include <iostream>
#include "custom_stack.h"

CustomStack::CustomStack() {
}

CustomStack::~CustomStack() {
}

bool CustomStack::empty() {
    return datos.empty();
}

CustomStack::size() {
    return datos.size();
}

CustomStack::top() {
    if (empty()) {
        std::cout << "La pila esta vacia";
        return -1;
    }
    return datos.back();
}

void CustomStack::push(int valor) {
    datos.push_back(valor);
}

void CustomStack::pop() {
    if (empty()) {
        std::cout << "La pila esta vacia";
    }
    datos.pop_back();
}