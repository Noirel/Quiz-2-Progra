//
// Created by ESCINF on 16/03/2026.
//

#ifndef PATRONDECORATOR_PIZZAQUESO_H
#define PATRONDECORATOR_PIZZAQUESO_H
#include "Pizza.h"
#include <iostream>
using namespace std;


class Queso : public Pizza {
public:
    Queso();
    string descripcion() const override;
    double costo() const override;
};


#endif //PATRONDECORATOR_PIZZAQUESO_H