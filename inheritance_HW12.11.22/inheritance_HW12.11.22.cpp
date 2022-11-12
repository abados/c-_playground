#include <iostream>
#include <string.h>
#include "RunnerQ1.h"
#include "RunnerAnimal.h"


#pragma warning(disable:4996)


int main()
{
	RunnerQ1 r;
	r.run();
	printf("/////////////////////////////////////////////\n");
/*	Animal z;
	z.set_code(555);
	char animalName[10] = "Zebra";
	z.set_name(animalName);
	z.printName();
	z.printNum();
	printf("/////////////////////////////////////////////\n");
	Dog loko;
	loko.set_code(100);
	loko.set_gurimCount(2);
	strcpy(animalName, "Malinowa");
	loko.set_name(animalName);
	loko.print_all_Dog_Data();
	printf("/////////////////////////////////////////////\n");
	Cat mitze;
	mitze.set_code(100);
	strcpy(animalName, "siam");
	mitze.set_CatsGurimCount(5);
	mitze.set_CatAge(7);
	mitze.set_name(animalName);
	mitze.print_all_Cat_Data();
*/
	RunnerAnimal runner2;
	runner2.runAnimal();

	return 0;
}
