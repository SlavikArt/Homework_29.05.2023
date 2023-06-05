#include "AnimalWorld.h"
#include "Africa.h"
#include "NorthAmerica.h"
#include "Eurasia.h"

int main()
{
	srand(time(0));

	Continent* africa = new Africa();

	AnimalWorld world1(africa);

	for (int i = 0; i < 5; i++)
	{
		world1.AddHerbivore();
		world1.AddCarnivore();
	}

	world1.MealsHerbivores();
	std::cout << "\n";
	world1.NutritionCarnivores();
	std::cout << "\n";

	world1.Print();

	delete africa;

	Continent* northAmerica = new NorthAmerica();

	AnimalWorld world2(northAmerica);

	for (int i = 0; i < 5; i++)
	{
		world2.AddHerbivore();
		world2.AddCarnivore();
	}

	world2.MealsHerbivores();
	std::cout << "\n";
	world2.NutritionCarnivores();
	std::cout << "\n";

	world2.Print();

	delete northAmerica;

	Continent* eurasia = new Eurasia();

	AnimalWorld world3(eurasia);

	for (int i = 0; i < 5; i++)
	{
		world3.AddHerbivore();
		world3.AddCarnivore();
	}

	world3.MealsHerbivores();
	std::cout << "\n";
	world3.NutritionCarnivores();
	std::cout << "\n";

	world3.Print();

	delete eurasia;
}
