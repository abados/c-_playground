
#include <iostream>
#include "Car.h"
#pragma warning(disable:4996)
int main()
{
    char carType[100] = "Toyota";
    char carColor[100] = "gray";
    Car myTyotaCar(carType, carColor, 150000, 2282768, 5, 100);
   

    strcpy(carType, "BMW");
    strcpy(carColor, "black");
    Car* myBMWRide= new Car(carType, carColor, 200000,1112233, 7, 150);

    strcpy(carType, "Mercedes-Benz");
    strcpy(carColor, "white");
    Car* myMercedesRide = new Car(carType, carColor, 200000, 1112233, 7, 150);

    strcpy(carType, "Honda");
    strcpy(carColor, "black");
    Car* myHondaRide = new Car(carType, carColor, 200000, 1112233, 7, 150);

    strcpy(carType, "Suzuki");
    strcpy(carColor, "green");
    Car* mySuzukiRide = new Car(carType, carColor, 200000, 1112233, 7, 150);


    for (size_t i = 0; i < 10; i++)
    {
        myHondaRide->addKM(5);
    }

    myHondaRide->printCarStatus();



}


