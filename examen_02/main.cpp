#include "tarjeta.h"
#include "efectivo.h"

int main() {
    Pago* p1 = new Tarjeta();
    Pago* p2 = new Efectivo();

    p1->procesarPago();
    p2->procesarPago();

    delete p1;
    delete p2;

    return 0;
}