#pragma once
#include "Continent.h"

class AnimalWorld
{
	Continent* continent;

	std::vector<Herbivore*> herbivores;
	std::vector<Carnivore*> carnivores;
public:
	AnimalWorld(Continent* continent)
	{
		this->continent = continent;

		herbivores.push_back(continent->createHerbivore());
		carnivores.push_back(continent->createCarnivore());
	}

	void AddHerbivore(Herbivore* herbivore = nullptr)
	{
		if (herbivore != nullptr)
			herbivores.push_back(herbivore);
		else
			herbivores.push_back(continent->createHerbivore());
	}
	void AddCarnivore(Carnivore* carnivore = nullptr)
	{
		if (carnivore != nullptr)
			carnivores.push_back(carnivore);
		else
			carnivores.push_back(continent->createCarnivore());
	}

	void MealsHerbivores()
	{
		for (int i = 0; i < herbivores.size() * 2; i++)
			herbivores[rand() % (herbivores.size() - 1)]->EatGrass();
	}
	void NutritionCarnivores()
	{
		for (auto& carnivore : carnivores)
			carnivore->Eat(
				herbivores[rand() % (herbivores.size() - 1)]
			);
	}

	void Print()
	{
		std::cout << "Herbivores:\n\n";
		for (auto& herbivore : herbivores)
			std::cout << herbivore->ToString() << "\n";

		std::cout << "Carnivores:\n\n";
		for (auto& carnivore : carnivores)
			std::cout << carnivore->ToString() << "\n";
	}

	~AnimalWorld()
	{
		for (auto& elem : herbivores)
			delete elem;

		for (auto& elem : carnivores)
			delete elem;
	}
};
