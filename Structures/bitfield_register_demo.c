/*
Bit-fields in Structures
Goal
Learn to define and use bit-fields to manage individual bits for hardware register simulation.

Activity
Log Session a structure using bit-fields to represent an 8-bit status register.
Assign values to specific flags.
Log Session a mock register with error, ready, and mode bits.
Write code to toggle specific flags without using bitwise operators.
Reflect on how compilers handle ordering and alignment of bit-fields.
Tip: Bit-fields may behave differently on different compilers—don't assume portability.
*/
#include<stdio.h>
struct StatusRegister
{
    unsigned int error : 1;
    unsigned int ready : 1;
    unsigned int mode  : 2;
    unsigned int reserved : 4;
};
void Assign_Flags(struct StatusRegister *reg);
void Toggle_Flags(struct StatusRegister *reg);
void Print_Register(struct StatusRegister reg);
int main()
{
    struct StatusRegister reg = {0};
    Assign_Flags(&reg);
    printf("Register values after assignment:\n");
    Print_Register(reg);
    Toggle_Flags(&reg);
    printf("\nRegister values after toggle:\n");
    Print_Register(reg);
    printf("\nSize of register structure = %lu bytes\n",
    sizeof(reg));
    printf("Bit-field ordering and alignment may vary\n");
    printf("between compilers and systems\n");   
    return 0;
}
void Assign_Flags(struct StatusRegister *reg)
{
    reg->error = 1;
    reg->ready = 1;
    reg->mode = 2;
}
void Toggle_Flags(struct StatusRegister *reg)
{
    if(reg->error == 1)
    {
        reg->error = 0;
    }
    else
    {
        reg->error = 1;
    }

    if(reg->ready == 1)
    {
        reg->ready = 0;
    }
    else
    {
        reg->ready = 1;
    }
}

void Print_Register(struct StatusRegister reg)
{
    printf("Error Flag = %u\n",reg.error);
    printf("Ready Flag = %u\n",reg.ready);   
    printf("Mode Value = %u\n",reg.mode);
}