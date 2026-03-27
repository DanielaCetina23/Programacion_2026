#ifndef PAGO_H
#define PAGO_H

#include <iostream>
using namespace std;

class Pago {
public: 
    virtual void procesarPago() {
        cout << "Procesando pago general..." << endl;
    }

    virtual ~Pago() {}
};

#endif