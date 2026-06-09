/*
Structure Pointers and Memory Access
Goal
Understand the use of pointers to structures for efficient memory access and how to use the arrow operator for member access.

Activity
Declare a pointer to a structure and allocate memory using malloc().
Use arrow operator to assign and print structure member values.
Simulate memory-mapped peripheral access using structure pointers.
Illustrate how structure pointers simplify code in register programming.
Tip: Always initialize structure pointers and check for NULL before dereferencing.
*/
#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
struct Peripheral
{
    uint32_t control;
    uint32_t status;
    uint32_t data;
};
void Dynamic_Structure_Demo(void);
void Peripheral_Access_Demo(void);
int main()
{
    Dynamic_Structure_Demo();
    printf("\n");
    Peripheral_Access_Demo();   
    return 0;
}
void Dynamic_Structure_Demo(void)
{
    struct Peripheral *ptr;
    ptr = (struct Peripheral *)
    malloc(sizeof(struct Peripheral));
    if(ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }
    ptr->control = 100;
    ptr->status = 1;
    ptr->data = 500;
    printf("Dynamic Structure Values:\n");
    printf("Control = %u\n",ptr->control);
    printf("Status = %u\n",ptr->status);
    printf("Data = %u\n",ptr->data);
    free(ptr);
}

void Peripheral_Access_Demo(void)
{
    struct Peripheral device;
    struct Peripheral *reg = &device;
    reg->control = 10;
    reg->status = 20;
    reg->data = 30;
    printf("Peripheral Register Values:\n");
    printf("Control Register = %u\n",reg->control);
    printf("Status Register = %u\n",reg->status);   
    printf("Data Register = %u\n",reg->data);
}