#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "car/car.h"
#include "car_array/car_array.h"

#include "car/car.c"
#include "car_array/car_array.c"

int main(){

    CarArray *all_cars = newCarArray();

    Car *corsa = newCar("yellow","chevrolet","corsa",2010);
    CarArray_append_car(all_cars,corsa);

    Car *ka = newCar("red","ford","ka",2010);
    CarArray_append_car(all_cars,ka);

    Car *laferarri = newCar("blue","ferrari","LaFerrari",2010);
    CarArray_append_car(all_cars,laferarri);

    //iterating over all cars
    for(int i = 0; i < CarArray_get_size(all_cars); i++){
        Car *current_car = CarArray_get_car(all_cars,i);
        printf("=========================================\n");
        printf("Color: %s\n",CarGetColor(current_car));
        printf("Model: %s\n",CarGetModel(current_car));
        printf("Type: %s\n",CarGetType(current_car));
        printf("Year: %d\n",CarGetYear(current_car)); 
    }
    //removing the ford ka 
    CarArray_destroy_car(all_cars,1);

    printf("New Iteration without ka\n\n");


    for(int i = 0; i < CarArray_get_size(all_cars); i++){
        Car *current_car = CarArray_get_car(all_cars,i);
        printf("=========================================\n");
        printf("Color: %s\n",CarGetColor(current_car));
        printf("Model: %s\n",CarGetModel(current_car));
        printf("Type: %s\n",CarGetType(current_car));
        printf("Year: %d\n",CarGetYear(current_car)); 
    }


    CarArray_free(all_cars);

}
