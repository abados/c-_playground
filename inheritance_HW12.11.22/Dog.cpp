#include "Dog.h"
#include <iostream>
#include <string.h>
#pragma warning(disable:4996)

void Dog::set_gurimCount(int aNum)
{
	this->gurimCount = aNum;

}

void Dog::print_gurimCount()
{
	printf("this is the private gurim_count parameter of dog %d\n", this->gurimCount);


}

void Dog::print_all_Dog_Data()
{
	
	printf("this is all the dog data gurim count:%d  \n", this->gurimCount);
	this->printNum();
	this->printName();


}



