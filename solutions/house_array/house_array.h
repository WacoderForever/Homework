typedef struct HouseArray{

    House **houses;
    int size;

}HouseArray;

HouseArray *newHouseArray();

void AppendHouseArray(HouseArray *self,House *house);
void RemoveHouse(HouseArray *self,int index);

House *GetHouseInArray(HouseArray *self,int index);
int GetHouseArraySize(HouseArray *self);

void FreeHouseArray(HouseArray *self);
