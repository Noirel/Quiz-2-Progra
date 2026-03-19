//
// Created by ESCINF on 19/03/2026.
//

#ifndef PATRONDECORADOR_EJEMPLO_MAIN_CALZONESIMPLE_H
#define PATRONDECORADOR_EJEMPLO_MAIN_CALZONESIMPLE_H
#include "Calzone.h"


class CalzoneSimple : public Calzone {
public:
    CalzoneSimple();
    string descripcion() const override;
    double costo() const override;
};


#endif //PATRONDECORADOR_EJEMPLO_MAIN_CALZONESIMPLE_H