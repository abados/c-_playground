#pragma once
class Animal
{

private:
	char name[100];
	int code;

public:

	int age;
	void set_code(int code);
	void printNum();
	void set_name(char*);
	void printName();
	void printAge();
	void virtual set_age();

};


