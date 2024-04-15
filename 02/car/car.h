


typedef struct Car{

    char *color;
    char *model;
    char *type;
    int year;
}Car;

Car *newCar(const char *color,const char *model,const char *type,int year);

void CarSetColor(Car *self,const char *color);

void CarSetModel(Car *self,const char *model);

void CarSetType(Car *self,const char *type);

void CarSetYear(Car *self,int year);


char *CarGetColor(Car *self);


char *CarGetModel(Car *self);


char *CarGetType(Car *self);


int CarGetYear(Car *self);

void CarFree(Car *self);
