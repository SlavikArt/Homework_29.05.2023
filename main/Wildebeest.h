#pragma once
#include "Herbivore.h"

class Wildebeest : public Herbivore
{
public:
	Wildebeest()
	{
		Weight = 50;
		Life = true;
	}

	void EatGrass()
	{
		std::cout << "Wildebeest is eating grass\n";
		Weight += 10;
	}
	void Die()
	{
		std::cout << "Wildebeest is dying\n";
		Life = false;
	}
	std::string GetName() { return "Wildebeest"; }

	std::string ToString()
	{
		std::stringstream s;
		s << std::boolalpha
			<< "Wildebeest\n"
			<< "Weight: " << Weight << "\n"
			<< "Alive: " << Life << "\n";
		return s.str();
	}
};
