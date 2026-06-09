
/*
Structure Padding and Packed Attributes
Goal: Analyze memory layout and size differences of structs with and without packing for peripheral registers.
Activity:
Define a structure containing char, int, and short fields:
struct PeripheralRegs {
  char status;
  int control;
  short error;
};
Print the total size of the structure and the offsets of each member using offsetof().
Redefine the structure with __attribute__((packed)) and compare sizes and offsets
*/
#include<stdio.h>
#include<stddef.h>
struct PeripheralRegs
{
    char status;
    int control;
    short error;
};
struct __attribute__((packed)) PackedPeripheralRegs
{
    char status;
    int control;
    short error;
};
void Print_Normal_Structure();
void Print_Packed_Structure();
int main()
{
    Print_Normal_Structure();
    printf("\n");
    Print_Packed_Structure();
    return 0;
}

void Print_Normal_Structure()
{
    printf("Normal Structure:\n");
    printf("Size = %lu\n",
    sizeof(struct PeripheralRegs));
    printf("Offset of status = %lu\n",
    offsetof(struct PeripheralRegs,status));
    printf("Offset of control = %lu\n",
    offsetof(struct PeripheralRegs,control));
    printf("Offset of error = %lu\n",
    offsetof(struct PeripheralRegs,error));
}

void Print_Packed_Structure()
{
    printf("Packed Structure:\n");
    printf("Size = %lu\n",
    sizeof(struct PackedPeripheralRegs));
    printf("Offset of status = %lu\n",
    offsetof(struct PackedPeripheralRegs,status));
    printf("Offset of control = %lu\n",
    offsetof(struct PackedPeripheralRegs,control));   
    printf("Offset of error = %lu\n",
    offsetof(struct PackedPeripheralRegs,error));
}