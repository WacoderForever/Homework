

CarArray *newCarArray(){
    CarArray *self  = (CarArray*)malloc(sizeof(CarArray));
    *self  = (CarArray){0};
    self->cars = (Car**)malloc(0);
}

void CarArray_append_car(CarArray *self, Car *car){
    //realocate values acording to position
    self->cars = (Car**)realloc(self->cars,
        self->size + 1 * sizeof(CarArray*)
    );
    self->cars[self->size] = car;
    self->size+=1;
}

void CarArray_destroy_car(CarArray *self, int index){
    //removing the position
    CarFree(self->cars[index]);
    //reduce the size
    self->size-=1;
    for(int i = index; i < self->size; i++){
        self->cars[i] = self->cars[i+1];
    }

}

Car * CarArray_get_car(CarArray *self, int index){
    return self->cars[index];
}

int CarArray_get_size(CarArray *self){
    return self->size;
}


void CarArray_free(CarArray *self){
    for(int i = 0;i < self->size; i++){
        CarFree(self->cars[i]);
    }
    free(self->cars);
    free(self);
}

