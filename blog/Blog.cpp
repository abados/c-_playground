#include "Blog.h"
#include <iostream>
#include <string.h>
#pragma warning(disable:4996)


Blog::Blog(char blog_name[100], int blogSize)
{
	strcpy(name, blog_name);
	lineCount = blogSize;
	
}


void Blog::saveInFile()
{
	char fileName[50];
	sprintf(fileName, "%s.txt", name);
	FILE* f = fopen(fileName, "w");
	if (!f)
	{
		printf("File Error");
		return;
	}
	fputs(txt, f);
	fclose(f);
}
char* Blog::lodeFromFile()
{
	char fileName[50], * textReaden;
	int counter = 0;
	sprintf(fileName, "%s.txt", name);
	FILE* f = fopen(fileName, "r");
	if (!f)
	{
		printf("File Error");
		return 0;
	}
	while (fgetc(f) != EOF)
	{
		counter++;
	}
	fclose(f);
	f = fopen(fileName, "r");
	if (!f)
	{
		printf("File Error");
		return 0;
	}
	textReaden = (char*)malloc(sizeof(counter) + 1);
	if (!textReaden)
	{
		printf("Allocation Error");
		return 0;
	}
	fread(textReaden, counter, 1, f);
	fclose(f);
	return textReaden;
}
void Blog::addLine(char* line)
{
	strcat(txt, line);
}
void Blog::print()
{
	printf("Blog %s contant:\n%s", name, txt);
}

