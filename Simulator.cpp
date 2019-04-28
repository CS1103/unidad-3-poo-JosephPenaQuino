#include "Simulator.h"

Simulator::Simulator(int columns, int rows) : columns{columns}, rows{rows}{}

void Simulator::insert_charge(Charge new_charge)
{
    if (fit_on_grid(new_charge))
        list_of_charge.push_back(new_charge);
}

double Simulator::get_potential_at(Position position)
{
    double potential = 0;
    for (Charge current_charge : list_of_charge)
    {
        potential += current_charge.get_potential_on(position);
    }
    return potential;
}

void Simulator::fill_random(int quantity)
{

}

bool Simulator::fit_on_rows(int x)
{
    return x > 0 && x < rows;
}

bool Simulator::fit_on_columns(int y)
{
    return y > 0 && y < columns;
}

bool Simulator::fit_on_grid(Charge new_charge)
{
    if (fit_on_rows(new_charge.position.x) && fit_on_columns(new_charge.position.y))
    {
        return true;
//        for (Charge current_charge : list_of_charge)
//        {
//            bool resp = current_charge.position == new_charge.position;
//            if (resp)
//                return false;
//        }
    }
    else
        return false;

}
