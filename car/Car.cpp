#include "Car.h"
#include <iostream>
#include <string.h>
#pragma warning(disable:4996)

Car::Car(char carTypeIt[100],char carColor[100], int kmIt, int car_numIt, int seats_numIt, int numOfTravelsIt)
{
	strcpy(carType, carTypeIt);
	strcpy(color, carColor);
	km = kmIt;
	car_num = car_numIt;
	seats_num = seats_numIt;
	numOfTravels = numOfTravelsIt;
}


void Car::addKM(int addKm)
{
	km += addKm;
	numOfTravels++;
}

void Car::printCarStatus()
{
	printf("car type:%s , car number:%d, km amount:%d, ride number:%d, avg for km per ride:%d", carType, car_num, km, numOfTravels, km / numOfTravels);
}
