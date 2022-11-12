#pragma once
#include "Father.h"

class Child:public Father
{
public:


	int ChildNum;

	int get_func_child(int newNum);


};
