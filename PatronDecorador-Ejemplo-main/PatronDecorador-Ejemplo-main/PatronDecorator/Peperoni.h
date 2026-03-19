//
// Created by ESCINF on 16/03/2026.
//

#ifndef PATRONDECORATOR_PEPERONI_H
#define PATRONDECORATOR_PEPERONI_H
#include "DecoradorPizza.h"


class Peperoni : public DecoradorPizza {
public:
    explicit Peperoni(Pizza *pizza);
    string descripcion() const override;
    double costo() const override;
};


#endif //PATRONDECORATOR_PEPERONI_H