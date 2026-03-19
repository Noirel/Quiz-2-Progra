//
// Created by ESCINF on 16/03/2026.
//

#ifndef PATRONDECORATOR_DECORADORPIZZA_H
#define PATRONDECORATOR_DECORADORPIZZA_H

#include "Pizza.h"

class DecoradorPizza : public Pizza {
protected:
    Pizza *pizza;
public:
    DecoradorPizza();
    explicit DecoradorPizza(Pizza *pizza);
    ~DecoradorPizza() override;
};


#endif //PATRONDECORATOR_DECORADORPIZZA_H