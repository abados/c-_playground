#include "Cat.h"
#include <iostream>
#include <string.h>
#pragma warning(disable:4996)

void Cat::set_CatsGurimCount(int aNum)
{
	this->CatsGurimCount = aNum;

}

void Cat::set_CatAge(int aAge)
{
	this->age= aAge;

}

void Cat::print_CatsGurimCount()
{
	printf("this is the private gurim_count parameter of Cat %d\n", this->CatsGurimCount);


}

void Cat::print_all_Cat_Data()
{

	//printf("this is all the dog data gurim count:%d  \n", this->CatsGurimCount);
	this->printNum();
	this->printName();
	this->print_CatsGurimCount();


}


void Cat::set_age() {

	printf("the Cat is old");

}





