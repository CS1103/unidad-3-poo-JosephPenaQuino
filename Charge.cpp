#include "Charge.h"

Charge::Charge(Position position, int charge) : position{position}, charge{charge} {}

double Charge::calculate_distance(Position target)
{
    double cof1 = pow(target.x - position.x, 2);
    double cof2 = pow(target.y - position.y, 2);
    double distance = sqrt(cof1 + cof2);
    return distance;
}

double Charge::get_potential_on(Position target)
{

    return k*charge/calculate_distance(target);
}

bool double_equals(double a, double b, double epsilon = 0.001)
{
    return std::abs(a - b) < epsilon;
}

Position::Position(int _x, int _y)
{
    x = _x;
    y = _y;
}

inline bool Position::operator==(Position &other) const
{
    return x == other.x && y == other.y;
}

//bool UTEC::Position::operator == (const Position &pos1, const Position &pos2)
//{
//    return pos1.x == pos2.x && pos1.y == pos2.y;
//}