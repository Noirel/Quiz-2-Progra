//
// Created by ESCINF on 16/03/2026.
//

#include "DecoradorPizza.h"

DecoradorPizza::DecoradorPizza() {
    pizza = nullptr;
}

DecoradorPizza::DecoradorPizza(Pizza *pizza) {
    this->pizza = pizza;
}

DecoradorPizza::~DecoradorPizza() {
    delete pizza;
}
