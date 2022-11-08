#pragma once
class Car
{
public:
	/// <summary>
	///  Properties
	/// </summary>
	char carType[100];
	char color[100];
	int km;
	int car_num;
	int seats_num;
	int numOfTravels;	


	/// <summary>
	/// Actions
	/// </summary>
	Car(char carType[100],char carColor[100],int km, int car_num, int seats_num, int numOfTravels);

	void addKM(int kmToAdd);

	void printCarStatus();

	
};
