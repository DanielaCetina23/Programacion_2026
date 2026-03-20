#ifndef NOTIFICACION_H
#define NOTIFICACION_H

class Notificacion {
public:
    virtual void enviar() = 0;
    virtual ~Notificacion() {}
};

#endif
