#ifndef UNIDAD_3_POO_JOSEPHPENAQUINO_CHARGE_H
#define UNIDAD_3_POO_JOSEPHPENAQUINO_CHARGE_H

#include <cmath>
#include "Simulator.h"

struct Position
{
    int x;
    int y;

    Position(int _x, int _y)
    {
        x = _x;
        y = _y;
    }
};

class Charge
{

private:
    const double k = 8.99 * pow(10, 9);
    Position position;
    int charge;

public:
    friend class Simulator;
//    friend Simulator::insert_charge(Charge new_charge);
    Charge(Position position, int charge);
    double calculate_distance(Position target);
    double get_potential_on(Position target);
};

bool double_equals(double a, double b, double epsilon);

#endif //UNIDAD_3_POO_JOSEPHPENAQUINO_CHARGE_H
