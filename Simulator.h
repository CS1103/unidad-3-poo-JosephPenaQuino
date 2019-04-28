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
    inline bool fit_on_rows(int x);
    inline bool fit_on_columns(int y);
    inline bool Simulator::fit_on_grid(Charge new_charge);

public:
    Simulator(int columns, int rows);
    void insert_charge(Charge new_charge);
    double get_potential_at(Position position);
    void fill_random(int quantity);
};


#endif //UNIDAD_3_POO_JOSEPHPENAQUINO_SIMULATOR_H
