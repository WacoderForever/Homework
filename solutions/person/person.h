typedef struct Person{

    char *fname;
    char *lname;
    int age;

}Person;

void SetPersonFname(Person *self,char *fname);
void SetPersonLname(Person *self,char *lname);
void SetPersonAge(Person *self,int age);

Person *newPerson(char *fname,char *lname,int age);

char *GetPersonFname(Person *self);
char *GetPersonLname(Person *self);
int GetPersonAge(Person *self);

void FreePerson(Person *self);