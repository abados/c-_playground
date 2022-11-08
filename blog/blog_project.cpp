#include <iostream>
#include <string.h>
#include "BLOG.h"
#pragma warning(disable:4996)
int main()
{
	char name[] = "AWESOME";
	char line[100];
	Blog* b1 = new Blog(name, 1000);
	strcpy_s(b1->txt, "Hello this is Hay's Blog\n");
	strcpy_s(line, "You are also welcome to join my Podcast channel\n");
	b1->addLine(line);
	strcpy_s(line, "The name of the podcast is \"MONEY MAKER\" \n");
	b1->addLine(line);
	strcpy_s(line, "I love to code \n");
	b1->addLine(line);
	b1->saveInFile();
	strcpy_s(b1->txt, "");
	strcpy_s(b1->txt, b1->lodeFromFile());
	b1->print();
	return 0;
}