

typedef struct {

    Car **cars;
    int size;
    
}CarArray;

CarArray *newCarArray();

void CarArray_append_car(CarArray *self, Car *car);

void CarArray_destroy_car(CarArray *self, int index);

Car * CarArray_get_car(CarArray *self, int index);

int CarArray_get_size(CarArray *self);


void CarArray_free(CarArray *self);

