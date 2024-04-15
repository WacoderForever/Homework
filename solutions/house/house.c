void SetHouseType(House *self,char *type){

    if(self->type){

        free(self->type);
    }

    self->type=strdup(type);
}

void SetHouseLocation(House *self,char *location){

    if(self->location){

        free(self->location);
    }

    self->location=strdup(location);
}

void SetHousePrice(House *self,float price){

    self->price=price;
}

//constructor
House *newHouse(char *type,char *location,float price){

    House *self=(House*)malloc(sizeof(House));
    *self=(House){0};
    SetHouseType(self,type);
    SetHouseLocation(self,location);
    SetHousePrice(self,price);

    return self;
}

char *GetHouseType(House *self){

    return self->type;
}

char *GetHouseLocation(House *self){

    return self->location;
}

float GetHousePrice(House *self){

    return self->price;
}

void FreeHouse(House *self){

    if(self->type){

        free(self->type);
    }

    if(self->location){

        free(self->location);
    }

    free(self);
}