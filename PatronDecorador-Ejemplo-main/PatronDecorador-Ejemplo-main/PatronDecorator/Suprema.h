//
// Created by ESCINF on 16/03/2026.
//

#ifndef PATRONDECORATOR_SUPREMA_H
#define PATRONDECORATOR_SUPREMA_H
#include "DecoradorPizza.h"

class Suprema : public DecoradorPizza {
public:
    Suprema();
    Suprema(Pizza* pizza);
    string descripcion() const override;
    double costo() const override;

};


#endif //PATRONDECORATOR_SUPREMA_H