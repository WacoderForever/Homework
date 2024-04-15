
Car *newCar(const char *color,const char *model,const char *type,int year){

    Car *self=(Car*)malloc(sizeof(Car));
    *self=(Car){0};
    CarSetColor(self,color);
    CarSetModel(self,model);
    CarSetType(self,type);
    CarSetYear(self,year);

    return self;
}

//setters
void CarSetColor(Car *self,const char *color){

    if(self->color){

        free(self->color);
    }

    self->color=strdup(color);
}

void CarSetModel(Car *self,const char *model){

    if(self->model){

        free(self->model);
    }

    self->model=strdup(model);
}

void CarSetType(Car *self,const char *type){

    if(self->type){

        free(self->type);
    }

    self->type=strdup(type);
}

void CarSetYear(Car *self,int year){

    self->year=year;
}

//constructor


//getters

char *CarGetColor(Car *self){

    return self->color;
}

char *CarGetModel(Car *self){

    return self->model;
}

char *CarGetType(Car *self){

    return self->type;
}

int CarGetYear(Car *self){

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

