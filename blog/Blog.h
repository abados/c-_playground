#pragma once

class Blog
{
public:
	/// <summary>
	///  Properties
	/// </summary>
	char name[100];
	char txt[1000];
	int lineCount;



	/// <summary>
	/// Actions
	/// </summary>
	Blog(char name[100], int blogSize);

	void saveInFile();

	char* lodeFromFile();

	void addLine(char* txt);

	void print();


};

