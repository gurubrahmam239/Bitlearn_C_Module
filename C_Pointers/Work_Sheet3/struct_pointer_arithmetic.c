

/*
Pointer Arithmetic on Struct Arrays
Goal: Access and modify an array of peripheral register structs using pointer arithmetic.
Activity:Define a struct representing peripheral registers:
struct Peripheral {
  uint8_t status;
  uint8_t control;
  uint16_t data;
};
Declare an array of 5 such structs.
Use a pointer to traverse and modify the array elements using pointer arithmetic.
*/
#include<stdio.h>
#include<stdint.h>
struct Peripheral
{
    uint8_t status;
    uint8_t control;
    uint16_t data;
};
int main()
{
    struct Peripheral devices[5];
    struct Peripheral *ptr = devices;
    for(int i=0;i<5;i++)
    {
        (ptr+i)->status=i+1;
        (ptr+i)->control=(i+1)*10;
        (ptr+i)->data=(i+1)*100;
    }
    printf("Peripheral Register Values:\n");
    for(int i=0;i<5;i++)
    {
        printf("Device %d\n",i+1);
        printf("Status = %u\n",(ptr+i)->status);
        printf("Control = %u\n",(ptr+i)->control);
        printf("Data = %u\n",(ptr+i)->data);   
        printf("\n");
    }   
    return 0;
}
