//
// Created by ESCINF on 19/03/2026.
//

#include "SalamiQuesoTomate.h"

SalamiQuesoTomate::SalamiQuesoTomate(Calzone *calzone) : DecoradorCalzone(calzone) {
}

string SalamiQuesoTomate::descripcion() const {
    return this->calzone->descripcion() + " + Salami, Queso y Salsa de Tomate";
}

double SalamiQuesoTomate::costo() const {
    return this->calzone->costo() + 500;
}
