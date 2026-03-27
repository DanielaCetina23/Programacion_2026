#ifndef TARJETA_H
#define TARJETA_H

#include "pago.h"

class Tarjeta : public Pago {
public:
    void procesarPago() override {
        cout << "Pago realizado con tarjeta" << endl; 
    }
};

#endif 