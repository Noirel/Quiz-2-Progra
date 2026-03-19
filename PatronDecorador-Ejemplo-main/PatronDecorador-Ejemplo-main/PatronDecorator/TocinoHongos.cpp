//
// Created by ESCINF on 19/03/2026.
//

#include "TocinoHongos.h"

TocinoHongos::TocinoHongos() {
    this->calzone = nullptr;
}

TocinoHongos::TocinoHongos(Calzone *calzone) {
    this->calzone = calzone;
}

string TocinoHongos::descripcion() const {
    return this->calzone->descripcion() + " + Tocino y Hongos";
}

double TocinoHongos::costo() const {
    return this->calzone->costo() + 1000;
}
