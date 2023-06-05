#pragma once
#include "Herbivore.h"

class Bison : public Herbivore
{
public:
	Bison()
	{ 
		Weight = 60;
		Life = true;
	}

	void EatGrass()
	{
		std::cout << "Bison is eating grass\n";
		Weight += 10;
	}
	void Die()
	{
		std::cout << "Bison is dying\n";
		Life = false;
	}
	std::string GetName() { return "Bison"; }

	std::string ToString()
	{
		std::stringstream s;
		s << std::boolalpha 
			<< "Bison\n"
			<< "Weight: " << Weight << "\n"
			<< "Alive: " << Life << "\n";
		return s.str();
	}
};
