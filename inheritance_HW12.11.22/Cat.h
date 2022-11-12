#pragma once
#include "Animal.h"

class Cat :public Animal
{

private:

	int CatsGurimCount;
	int age;

public:

	void set_CatsGurimCount(int count);
	void set_CatAge(int age);
	void print_CatsGurimCount();
	void print_all_Cat_Data();
	void set_age();



};

