#pragma once
#include "Carnivore.h"

class Wolf : public Carnivore
{
public:
	Wolf()
	{
		Power = 60;
		herbivoresEaten = 0;
	}

	void Eat(Herbivore* herbivore)
	{
		if (herbivore->IsAlive())
		{
			if (Power >= herbivore->GetWeight())
			{
				std::cout << "Wolf is eating "
					<< herbivore->GetName() << "\n";
				Power += 10;
				herbivoresEaten++;
				herbivore->Die();
			}
			else
			{
				std::cout << "Wolf tried to eat "
					<< herbivore->GetName() << "\n";
				Power -= 10;
			}
		}
	}
	std::string ToString()
	{
		std::stringstream s;
		s << std::boolalpha
			<< "Wolf\n"
			<< "Power: " << "\n"
			<< "HerbivoresEaten: " << herbivoresEaten << "\n";
		return s.str();
	}
};
