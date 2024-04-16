PersonArray *newPersonArray(){

    PersonArray *self=(PersonArray*)malloc(sizeof(PersonArray));
    *self=(PersonArray){0};
    self->persons=(Person**)malloc(0);

    return self;
}

void AppendPersonInArray(PersonArray *self,Person *person){

    self->persons=(Person**)realloc(self->persons,sizeof(self->size+1)*sizeof(PersonArray*));

    self->persons[self->size]=person;
    self->size+=1;
}

void DeletePersonInArray(PersonArray *self,int index){

    FreePerson(self->persons[index]);

    for(int i=index;i<index;i++){

        self->persons[i]=self->persons[i+1];
    }

    self->size--;
}

Person *GetPersonInArray(PersonArray *self,int index){

    return self->persons[index];
}

void FreePersonArray(PersonArray *self){

    if(self->persons){

        for(int i=0;i<self->size;i++){

            FreePerson(self->persons[i]);
        }
    }

    free(self);
}