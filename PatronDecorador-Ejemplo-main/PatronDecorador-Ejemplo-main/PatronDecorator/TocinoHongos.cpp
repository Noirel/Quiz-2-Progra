//
// Created by ESCINF on 19/03/2026.
//

#include "TocinoHongos.h"

TocinoHongos::TocinoHongos(Calzone *calzone) : DecoradorCalzone(calzone) {
}

string TocinoHongos::descripcion() const {
    return this->calzone->descripcion() + " + Tocino y Hongos";
}

double TocinoHongos::costo() const {
    return this->calzone->costo() + 1000;
}
