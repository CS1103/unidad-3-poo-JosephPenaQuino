#ifndef UNIDAD_3_POO_JOSEPHPENAQUINO_SIMULATOR_H
#define UNIDAD_3_POO_JOSEPHPENAQUINO_SIMULATOR_H


#include "Charge.h"
#include <vector>

class Simulator
{
private:
    int columns;
    int rows;
    std::vector<Charge> list_of_charge;

public:
    Simulator(int columns, int rows);
    void insert_charge(Charge new_charge);
//    friend void Charge::insert_charge(Charge new_charge);
    double get_potential_at(Position position);
    void fill_random(int quantity);
};


#endif //UNIDAD_3_POO_JOSEPHPENAQUINO_SIMULATOR_H
