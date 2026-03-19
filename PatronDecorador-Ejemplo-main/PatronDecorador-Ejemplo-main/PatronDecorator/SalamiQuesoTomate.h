//
// Created by ESCINF on 19/03/2026.
//

#ifndef PATRONDECORADOR_EJEMPLO_MAIN_SALAMIQUESOTOMATE_H
#define PATRONDECORADOR_EJEMPLO_MAIN_SALAMIQUESOTOMATE_H
#include "DecoradorCalzone.h"

class SalamiQuesoTomate : public DecoradorCalzone{
public:
    explicit SalamiQuesoTomate(Calzone *calzone);
    string descripcion() const override;
    double costo() const override;
};


#endif //PATRONDECORADOR_EJEMPLO_MAIN_SALAMIQUESOTOMATE_H