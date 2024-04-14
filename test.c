#include "house.h"

int main(){

    House *myHouse=newHouse("Bungalow","Mars",55000.75);
    printf("House Type: %s\n",GetType(myHouse));
    printf("House Location: %s\n",GetLocation(myHouse));
    printf("House Price: $%.2f\n",GetPrice(myHouse));

    HouseFree(myHouse);
    return 0;
}