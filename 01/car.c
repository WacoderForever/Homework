#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma pack(1)  //structure packing

typedef struct Car{

    char *color;
    char *model;
    char *type;
    int year;
}Car;

//setters
void SetColor(Car *self,char *color){

    if(self->color){

        free(self->color);
    }

    self->color=strdup(color);
}

void SetModel(Car *self,char *model){

    if(self->model){

        free(self->model);
    }

    self->model=strdup(model);
}

void SetType(Car *self,char *type){

    if(self->type){

        free(self->type);
    }

    self->type=strdup(type);
}

void SetYear(Car *self,int year){

    self->year=year;
}

//constructor

Car *newCar(char *color,char *model,char *type,int year){

    Car *self=(Car*)malloc(sizeof(Car));
    *self=(Car){0};
    SetColor(self,color);
    SetModel(self,model);
    SetType(self,type);
    SetYear(self,year);

    return self;
}

//getters

char *GetColor(Car *self){

    return self->color;
}

char *GetModel(Car *self){

    return self->model;
}

char *GetType(Car *self){

    return self->type;
}

int GetYear(Car *self){

    return self->year;
}

//deconstructor

void CarFree(Car *self){

    if(self->color){

        free(self->color);
    }

    if(self->model){

        free(self->model);
    }

    if(self->type){

        free(self->type);
    }

    free(self);
}

int main(){

    Car *myCar=newCar("Blue","Toyota","Corolla",2005);
    printf("Color: %s\n",GetColor(myCar));
    printf("Model: %s\n",GetModel(myCar));
    printf("Type: %s\n",GetType(myCar));
    printf("Year: %d\n",GetYear(myCar));

    CarFree(myCar);
    return 0;
}