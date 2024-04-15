HouseArray *newHouseArray(){

    HouseArray *self=(HouseArray*)malloc(sizeof(HouseArray));
    *self=(HouseArray){0};
    self->houses=(House**)malloc(0);
}

void AppendHouseArray(HouseArray *self, House *house){
    //allocating memory to store new house
    self->houses=(House**)realloc(self->houses,(self->size+1)*sizeof(HouseArray*));

    self->houses[self->size]=house;
    self->size+=1;
}

void RemoveHouse(HouseArray *self,int index){
    //removing house
    FreeHouse(self->houses[index]);

    //readjusting size of houses array
    for(int i=index;i<self->size;i++){

        self->houses[i]=self->houses[i+1];
    }
}

House *GetHouseInArray(HouseArray *self,int index){

    return self->houses[index];
}

int GetHouseArraySize(HouseArray *self){

    return self->size;
}

void FreeHouseArray(HouseArray *self){

    for(int i=0;i<self->size;i++){
        FreeHouse(self->houses[i]);
    }

    free(self->houses);
    free(self);
}
