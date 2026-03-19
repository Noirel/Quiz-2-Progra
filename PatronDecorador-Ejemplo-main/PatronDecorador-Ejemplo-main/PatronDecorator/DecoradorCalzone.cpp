//
// Created by ESCINF on 19/03/2026.
//

#include "DecoradorCalzone.h"

DecoradorCalzone::DecoradorCalzone() {
    calzone = nullptr;
}

DecoradorCalzone::DecoradorCalzone(Calzone *calzone) {
    this->calzone = calzone;
}

DecoradorCalzone::~DecoradorCalzone() {
    delete calzone;
}
