#include <iostream>

#include "Pizza.h"
#include "Suprema.h"
#include "DecoradorPizza.h"
#include "Peperoni.h"
#include "Queso.h"
#include "Calzone.h"
#include "CalzoneSimple.h"
#include "DecoradorCalzone.h"
#include "SalamiQuesoTomate.h"
#include "TocinoHongos.h"
using namespace std;

int main() {
    Pizza* pizza1 = new Queso();
    cout << pizza1->descripcion() << endl;
    cout << "Costo: $" << pizza1->costo() << endl << endl;
    delete pizza1;

    Pizza* pizza2 = new Suprema(new Peperoni(new Queso()));
    cout << pizza2->descripcion() << endl;
    cout << "Costo: $" << pizza2->costo() << endl << endl;
    delete pizza2;

    Calzone* calzone1 = new CalzoneSimple();
    cout << calzone1->descripcion() << endl;
    cout << "Costo: $" << calzone1->costo() << endl << endl;
    delete calzone1;

    Calzone* calzone2 = new TocinoHongos(new SalamiQuesoTomate(new CalzoneSimple()));
    cout << calzone2->descripcion() << endl;
    cout << "Costo: $" << calzone2->costo() << endl << endl;
    delete calzone2;

    return 0;
}