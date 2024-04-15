#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "house/house.h"
#include "house/house.c"
#include "house_array/house_array.h"
#include "house_array/house_array.c"

int main(){

    HouseArray *myHouses=newHouseArray();

    House *house1=newHouse("Bungalow","Mars",150000.76);
    AppendHouseArray(myHouses,house1);

    House *house2=newHouse("Rental","Pluto",15000);
    AppendHouseArray(myHouses,house2);

    House *house3=newHouse("Apartment","Earth",7800.43);
    AppendHouseArray(myHouses,house3);

    for(int i=0;i<myHouses->size;i++){

        House *temp=GetHouseInArray(myHouses,i);
        printf("======================================\n");
        printf("House type: %s\n",GetHouseType(temp));
        printf("House location: %s\n",GetHouseLocation(temp));
        printf("House price: %.2f\n",GetHousePrice(temp));
    }

    RemoveHouse(myHouses,2);

    for(int i=0;i<myHouses->size;i++){

        House *temp=GetHouseInArray(myHouses,i);
        printf("======================================\n");
        printf("House type: %s\n",GetHouseType(temp));
        printf("House location: %s\n",GetHouseLocation(temp));
        printf("House price: %.2f\n",GetHousePrice(temp));
    }

    FreeHouseArray(myHouses);

    return 0;
}