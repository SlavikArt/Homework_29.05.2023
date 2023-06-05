#pragma once
#include "Carnivore.h"

class Lion : public Carnivore
{
public:
	Lion()
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
				std::cout << "Lion is eating "
					<< herbivore->GetName() << "\n";
				Power += 10;
				herbivoresEaten++;
				herbivore->Die();
			}
			else
			{
				std::cout << "Lion tried to eat "
					<< herbivore->GetName() << "\n";
				Power -= 10;
			}
		}
	}
	std::string ToString()
	{
		std::stringstream s;
		s << std::boolalpha
			<< "Lion\n"
			<< "Power: " << "\n"
			<< "HerbivoresEaten: " << herbivoresEaten << "\n";
		return s.str();
	}
};
