/*
Structure Padding, Alignment, and Packing
Goal
Understand how padding affects structure size and how to control layout using packing directives.

Activity
Log Session a structure with mixed data types (char, int, short).
Check the size and member offsets using sizeof() and pointer arithmetic.
Reorder members to reduce padding and observe the change in size.
Use #pragma pack(1) and compare memory layout.
Simulate a communication packet where field alignment matters.
Tip: Use offsetof() macro to determine the byte offset of each field
*/
#include<stdio.h>
#include<stddef.h>
struct Data
{
    char a;
    int b;
    short c;
};
#pragma pack(1)
struct PackedData
{
    char a;
    int b;
    short c;
};
#pragma pack()
int main()
{
    printf("Normal Structure Size = %lu\n",
    sizeof(struct Data));
    printf("Offset of a = %lu\n",offsetof(struct Data,a));
    printf("Offset of b = %lu\n",offsetof(struct Data,b));
    printf("Offset of c = %lu\n",offsetof(struct Data,c));
    printf("\n");
    printf("Packed Structure Size = %lu\n",
    sizeof(struct PackedData));
    printf("Offset of a = %lu\n",offsetof(struct PackedData,a));
    printf("Offset of b = %lu\n",offsetof(struct PackedData,b));
    printf("Offset of c = %lu\n",offsetof(struct PackedData,c));   
    return 0;
}