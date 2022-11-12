#include "Animal.h"
#include <iostream>
#include <string.h>
#pragma warning(disable:4996)

void Animal::set_code(int aNum)
{
	this->code = aNum;

}

void Animal::printNum()
{
	printf("this is the private parameter of animal %d\n", this->code);


}

void Animal::set_name(char* name) {
	
	strcpy(this->name, name);

}

void Animal::set_age() {

	printf("the animal is old");

}

void Animal::printAge() {

	set_age();

}



void Animal::printName() {

	printf("this is the private name of the animal %s\n", this->name);
}

