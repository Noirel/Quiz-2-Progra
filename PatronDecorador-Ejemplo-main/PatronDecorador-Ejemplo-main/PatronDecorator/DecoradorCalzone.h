//
// Created by ESCINF on 19/03/2026.
//

#ifndef PATRONDECORADOR_EJEMPLO_MAIN_DECORADORCALZONE_H
#define PATRONDECORADOR_EJEMPLO_MAIN_DECORADORCALZONE_H
#include "Calzone.h"

class DecoradorCalzone : public Calzone {
protected:
    Calzone *calzone;
public:
    DecoradorCalzone();
    explicit DecoradorCalzone(Calzone *calzone);
    ~DecoradorCalzone() override;
};


#endif //PATRONDECORADOR_EJEMPLO_MAIN_DECORADORCALZONE_H