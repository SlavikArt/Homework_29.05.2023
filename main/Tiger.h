#pragma once
#include "Carnivore.h"

class Tiger : public Carnivore
{
public:
    Tiger()
    {
        Power = 80;
        herbivoresEaten = 0;
    }

    void Eat(Herbivore* herbivore)
    {
        if (herbivore->IsAlive())
        {
            if (Power >= herbivore->GetWeight())
            {
                std::cout << "Tiger is eating "
                    << herbivore->GetName() << "\n";
                Power += 15;
                herbivoresEaten++;
                herbivore->Die();
            }
            else
            {
                std::cout << "Tiger tried to eat "
                    << herbivore->GetName() << "\n";
                Power -= 10;
            }
        }
    }
    std::string ToString()
    {
        std::stringstream s;
        s << std::boolalpha
            << "Tiger\n"
            << "Power: " << Power << "\n"
            << "HerbivoresEaten: " << herbivoresEaten << "\n";
        return s.str();
    }
};
