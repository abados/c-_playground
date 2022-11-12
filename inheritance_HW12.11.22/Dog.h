#pragma once
#include "Animal.h"

class Dog :public Animal
{

private: 

	int gurimCount;

public:

	void set_gurimCount(int count);
	void print_gurimCount();
	void print_all_Dog_Data();
	


};
