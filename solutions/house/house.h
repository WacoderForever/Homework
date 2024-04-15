typedef struct House{

    char *type;
    char *location;
    float price;
}House;

void SetHouseType(House *self,char *type);
void SetHouseLocation(House *self,char *location);
void SetHousePrice(House *self,float price);

House *newHouse(char *type,char *location,float price);

char *GetHouseType(House *self);
char *GetHouseLocation(House *self);
float GetHousePrice(House *self);

void FreeHouse(House *self);

