//
// Created by ESCINF on 16/03/2026.
//

#ifndef PATRONDECORATOR_PIZZA_H
#define PATRONDECORATOR_PIZZA_H
#include <iostream>
using namespace std;


class Pizza {
    public:
    virtual string descripcion() const = 0;
    virtual double costo() const = 0;
    virtual ~Pizza() = default;
};


#endif //PATRONDECORATOR_PIZZA_H