/*
 Memory Layout of Structures
Goal
Analyze the internal memory layout of structures, including padding, alignment, and impact on memory optimization.

Activity:
Define a structure and use sizeof() to observe unexpected sizes.
Use different data type orderings and compare structure size.
Simulate structure layout for peripheral memory mapping.
Apply structure packing using #pragma and compare memory efficiency.
Tip: Misaligned structures can cause performance hits on some architectures.
*/
#include<stdio.h>
#pragma pack(1)
struct PackedRegister
{
    char status;
    int control;
    short data;
};
#pragma pack()
struct NormalRegister
{
    char status;
    int control;
    short data;
};
struct OptimizedRegister
{
    int control;
    short data;
    char status;
};
void Print_Normal_Structure(void);
void Print_Optimized_Structure(void);
void Print_Packed_Structure(void);
int main()
{
    Print_Normal_Structure();
    printf("\n");
    Print_Optimized_Structure();
    printf("\n");
    Print_Packed_Structure();
    printf("\nPacked structures improve memory efficiency\n");
    printf("but may reduce performance on some systems\n");   
    return 0;
}
void Print_Normal_Structure(void)
{
    struct NormalRegister reg;   
    printf("Normal Structure Size = %lu Bytes\n",
    sizeof(reg));
}
void Print_Optimized_Structure(void)
{
    struct OptimizedRegister reg;    
    printf("Optimized Structure Size = %lu Bytes\n",
    sizeof(reg));
}
void Print_Packed_Structure(void)
{
    struct PackedRegister reg;   
    printf("Packed Structure Size = %lu Bytes\n",
    sizeof(reg));
}