#include "catch.hpp"
#include "Simulator.h"
#include "Charge.h"
#include <iostream>

SCENARIO("Charge Testing")
{
    GIVEN("A set of testing charges")
    {
        WHEN("Charge is 10 Coulombs with position 0, 0")
        {
            Position test_position(0, 0);
            Position target_position(1000, 2000);
            Charge test_charge(test_position, 10);
            THEN("Distance between the points is")
            {
                double distance = test_charge.calculate_distance(target_position);
                REQUIRE(double_equals(distance, 2236.067977, 0.001));
            }
            THEN("Potential at 1000, 2000 is 8040.900447")
            {
                double potential = test_charge.get_potential_on(target_position);
                REQUIRE(double_equals(potential, 40204502.24, 0.1));
            }
        }
    }
}
SCENARIO("Simulator Testing")
{
    GIVEN("A grid of 1000 by 1000")
    {
        Simulator test_simulator(1000, 1000);
        WHEN("There are 3 charges of 10, 20, 30 in position (32, 54), (123, 492), (432, 746), respectively")
        {
            Position pos1(32, 54);
            Charge test_charge_1(pos1, 10);
            test_simulator.insert_charge(test_charge_1);

            Position pos2(123, 492);
            Charge test_charge_2(pos2, 20);
            test_simulator.insert_charge(test_charge_2);

            Position pos3(432, 746);
            Charge test_charge_3(pos3, 30);
            test_simulator.insert_charge(test_charge_3);

            THEN("Potential at (32, 12) is ...")
            {
                Position pos_4(32, 12);
                double potential_1 = test_simulator.get_potential_at(pos_4);
                REQUIRE(double_equals(potential_1, 2831144079.06138, 0.0001));
            }
            THEN("Potential at (636, 149) is ...")
            {
                Position pos_5(636, 149);
                double potential_2 = test_simulator.get_potential_at(pos_5);
                REQUIRE(double_equals(potential_2, 865883978.37942, 0.0001));
            }
            THEN("Potential at (999, 999) is ...")
            {
                Position pos_6(999, 999);
                double potential_3 = test_simulator.get_potential_at(pos_6);
                REQUIRE(double_equals(potential_3, 678513939.7656, 0.0001));
            }
        }
    }
}