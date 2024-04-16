typedef struct PersonArray{
    Person** persons;
    int size;

}PersonArray;

PersonArray *newPersonArray();

void AppendPersonInArray(PersonArray *self,Person *person);
void DeletePersonInArray(PersonArray *self,int index);

Person *GetPersonInArray(PersonArray *self,int Person);

void FreePersonArray(PersonArray *self);