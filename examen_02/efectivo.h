#ifndef EFECTIVO_H
#define EFECTIVO_H

#include "pago.h"

class Efectivo : public Pago {
public: 
    void procesarPago() override {
        cout << "Pago realizado en efectivo" << endl; 
    }
};

#endif