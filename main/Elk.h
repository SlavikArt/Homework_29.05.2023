#pragma once
#include "Herbivore.h"

class Elk : public Herbivore
{
public:
    Elk()
    {
        Weight = 50;
        Life = true;
    }

    void EatGrass()
    {
        std::cout << "Elk is eating grass\n";
        Weight += 10;
    }
    void Die()
    {
        std::cout << "Elk is dying\n";
        Life = false;
    }
    std::string GetName() { return "Elk"; }

    std::string ToString()
    {
        std::stringstream s;
        s << std::boolalpha
            << "Elk\n"
            << "Weight: " << Weight << "\n"
            << "Alive: " << Life << "\n";
        return s.str();
    }
};
