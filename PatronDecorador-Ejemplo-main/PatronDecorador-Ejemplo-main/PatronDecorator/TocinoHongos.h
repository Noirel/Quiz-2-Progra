//
// Created by ESCINF on 19/03/2026.
//

#ifndef PATRONDECORADOR_EJEMPLO_MAIN_TOCINOHONGOS_H
#define PATRONDECORADOR_EJEMPLO_MAIN_TOCINOHONGOS_H
#include "DecoradorCalzone.h"

class TocinoHongos : public DecoradorCalzone {
public:
    explicit TocinoHongos(Calzone* calzone);
    string descripcion() const override;
    double costo() const override;
};


#endif //PATRONDECORADOR_EJEMPLO_MAIN_TOCINOHONGOS_H