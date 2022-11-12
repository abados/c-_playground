#include "RunnerAnimal.h"
#include <iostream>
#include <string.h>
#pragma warning(disable:4996)

void RunnerAnimal::runAnimal()
{
	// Providing a seed value
	srand((unsigned)time(NULL));

	// Get a random number
	int random = rand();

	int numOfDogs;
	int numOfCats;
	printf("type how much dogs you with us to add\n");
	scanf("%d", &numOfDogs);
	printf("type how much cats you with us to add\n");
	scanf("%d", &numOfCats);

	char animalName[20];
	Dog* d = (Dog*)malloc(sizeof(Dog) * numOfDogs);
	if (d == NULL)
	{
		return;
	}
	Cat* c = (Cat*)malloc(sizeof(Cat) * numOfCats);
	if (c == NULL)
	{
		return;
	}
	
	for (int i = 0; i < numOfCats; i++)
	{
		c = new Cat;
		random = rand();
		c->set_code(random);
		random = rand();
		c->set_CatsGurimCount(random);
		printf("please enter a name for the cats:");
		scanf("%s", animalName);
		c->set_name(animalName);
		c->print_all_Cat_Data();
		c->printAge();
		c++;

	}
	for (int i = 0; i < numOfDogs; i++)
	{
		d = new Dog;
		random = rand();
		d->set_code(random);
		random = rand();
		d->set_gurimCount(random);
		printf("please enter a name for the dogs:");
		scanf("%s", animalName);
		d->set_name(animalName);
		d->print_all_Dog_Data();
		d++;

	}

}
