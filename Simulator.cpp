#include "Simulator.h"

Simulator::Simulator(int columns, int rows) : columns{columns}, rows{rows}{}

void insert_charge(Charge new_charge)
{
    if (new_charge.x < rows && new_charge.y < columns)
        list_of_charge.push_back(new_charge);
}

double Simulator::get_potential_at(Position position)
{

    return 0;
}

void Simulator::fill_random(int quantity)
{

}
