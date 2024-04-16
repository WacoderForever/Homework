#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "person/person.h"
#include "person/person.c"
#include "person_array/person_array.h"
#include "person_array/person_array.c"

int main(){

    PersonArray *myArray=newPersonArray();

    Person *person1=newPerson("John","Doe",78);
    AppendPersonInArray(myArray,person1);

    Person *person2=newPerson("Joseph","Kilman",22);
    AppendPersonInArray(myArray,person2);

    Person *person3=newPerson("Zyzz","Lim",5);
    AppendPersonInArray(myArray,person3);

    for(int i=0;i<myArray->size;i++){

        Person *temp=GetPersonInArray(myArray,i);
        printf("====================================\n");
        printf("Person Fname: %s\n",GetPersonFname(temp));
        printf("Person Lname: %s\n",GetPersonLname(temp));
        printf("Person Age: %d\n",GetPersonAge(temp));
    }

    FreePersonArray(myArray);

    return 0;
}