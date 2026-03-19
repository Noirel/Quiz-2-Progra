//
// Created by ESCINF on 19/03/2026.
//

#ifndef PATRONDECORADOR_EJEMPLO_MAIN_CALZONE_H
#define PATRONDECORADOR_EJEMPLO_MAIN_CALZONE_H
#include <iostream>
using namespace std;

class Calzone {
public:
    virtual string descripcion() const = 0;
    virtual double costo() const = 0;
    virtual ~Calzone() = default;
};


#endif //PATRONDECORADOR_EJEMPLO_MAIN_CALZONE_H