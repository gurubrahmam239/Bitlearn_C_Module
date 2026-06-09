/*
Structure Declaration and Initialization
Goal
Understand the proper way to declare and initialize structures using multiple techniques and best practices.

Activity
Declare structure variables globally, locally, and statically.
Use designated initializers for clarity.
Use typedef to create aliases for complex structures.
Discuss structure initialization in embedded register mapping.
Tip: Static initialization is preferred for compile-time register definitions.
*/
#include<stdio.h>
typedef struct
{
    int control;
    int status;
    int data;
}RegisterMap;
struct Device
{
    int id;
    char name[20];
};
struct Device global_device = {1,"UART"};
static struct Device static_device = {2,"SPI"};
void Print_Device(struct Device d);
void Print_Register(RegisterMap r);
int main()
{
    struct Device local_device =
    {
        .id = 3,
        .name = "I2C"
    };
    RegisterMap reg =
    {
        .control = 100,
        .status = 1,
        .data = 500
    };
    printf("Global Structure:\n");
    Print_Device(global_device);
    printf("\nStatic Structure:\n");
    Print_Device(static_device);
    printf("\nLocal Structure:\n");
    Print_Device(local_device);
    printf("\nRegister Map Structure:\n");
    Print_Register(reg);
    printf("\nStatic initialization is useful in\n");
    printf("embedded systems for fixed register mapping\n");   
    return 0;
}
void Print_Device(struct Device d)
{
    printf("ID = %d\n",d.id);   
    printf("Name = %s\n",d.name);
}
void Print_Register(RegisterMap r)
{
    printf("Control = %d\n",r.control);
    printf("Status = %d\n",r.status);   
    printf("Data = %d\n",r.data);
}