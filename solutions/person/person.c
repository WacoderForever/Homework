void SetPersonFname(Person *self,char *fname){

    if(self->fname){
        free(self->fname);
    }

    self->fname=strdup(fname);
}

void SetPersonLname(Person *self,char *lname){

    if(self->lname){
        free(self->lname);
    }

    self->lname=strdup(lname);
}

void SetPersonAge(Person *self,int age){

    self->age=age;
}

Person *newPerson(char *fname,char *lname,int age){

    Person *self=(Person*)malloc(sizeof(Person));
    *self=(Person){0};

    SetPersonFname(self,fname);
    SetPersonLname(self,lname);
    SetPersonAge(self,age);
}

char *GetPersonFname(Person *self){

    return self->fname;
}

char *GetPersonLname(Person *self){

    return self->lname;
}

int GetPersonAge(Person *self){

    return self->age;
}

void FreePerson(Person *self){

    if(self->fname){

        free(self->fname);
    }

    if(self->lname){

        free(self->lname);
    }

    free(self);
}