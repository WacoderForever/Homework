#include <string.h>
#include <stdio.h>
#include <stdlib.h>
typedef struct {
    //here we define the propets of the person
    char *name;
    char *last_name;
    int age;

}Person;

void Person_set_name(Person *self,const char *name){
    //we verify if the memory its ocopied, if true, we free
    if(self->name){
        free(self->name);
    }

    //we copy name to self->name
    self->name = strdup(name);
}

void Person_set_last_name(Person *self,const char *last_name){
    //we verify if the memory its ocopied, if true, we free
    if(self->last_name){
        free(self->last_name);
    }

    //we copy name to self->name
    self->last_name = strdup(last_name);
}

void Person_set_age(Person *self,int age){
    self->age = age;
}

char *Person_get_name(Person *self){
    return self->name;
}

char *Person_get_last_name(Person *self){
    return self->last_name;
}

int Person_get_age(Person *self){
    return self->age;
}

Person * newPerson(const char *name,const char *last_name,int age){
    Person *self =  (Person*)malloc(sizeof(Person));
    //we set everything to NULL or 0 
    *self = (Person){0};
    Person_set_name(self,name);
    Person_set_last_name(self,last_name);
    Person_set_age(self,age);
    return self;
}

void Person_free(Person *self){
    //here we destruct everything of the object
    if(self->name){
        free(self->name);
    }
    if(self->last_name){
        free(self->last_name);
    }
    free(self);
}

int main(){
    Person *mateus = newPerson("mateus","moutinho",27);
    printf("name: %s\n",Person_get_name(mateus));
    printf("last name: %s\n",Person_get_last_name(mateus));
    printf("age: %d\n",Person_get_age(mateus));

    //release all the struct alocated memory
    Person_free(mateus);


}