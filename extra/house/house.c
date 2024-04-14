//setters

void SetType(House *self,char *type){

    if(self->type){
        free(self->type);
    }

    self->type=strdup(type);
}

void SetLocation(House *self,char *location){

    if(self->location){
        free(self->location);
    }

    self->location=strdup(location);
}

void SetPrice(House *self,float price){

    self->price=price;
}

//constructor

House *newHouse(char *type,char *location,float price){

    House *self=(House*)malloc(sizeof(House));
    *self=(House){0};
    SetType(self,type);
    SetLocation(self,location);
    SetPrice(self,price);

    return self;
}

//getters

char *GetType(House *self){

    return self->type;
}

char *GetLocation(House *self){

    return self->location;
}

float GetPrice(House *self){

    return self->price;
}

//deconstructor

void HouseFree(House *self){

    if(self->type){

        free(self->type);
    }
    if(self->location){

        free(self->location);
    }

    free(self);
}