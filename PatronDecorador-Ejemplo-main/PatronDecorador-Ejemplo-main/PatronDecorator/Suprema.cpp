//
// Created by ESCINF on 16/03/2026.
//

#include "Suprema.h"

Suprema::Suprema() {
    this->pizza = nullptr;
}

Suprema::Suprema(Pizza *pizza) {
    this->pizza = pizza;
}

string Suprema::descripcion() const {
    return this->pizza->descripcion() + " + suprema";
}

double Suprema::costo() const {
    return this->pizza->costo() + 1500;
}
