//
// Created by ESCINF on 16/03/2026.
//

#include "Peperoni.h"


Peperoni::Peperoni(Pizza *pizza) : DecoradorPizza(pizza) {
}

string Peperoni::descripcion() const {
    return this->pizza->descripcion() + " + peperoni";
}

double Peperoni::costo() const {
    return this->pizza->costo() + 500;
}
