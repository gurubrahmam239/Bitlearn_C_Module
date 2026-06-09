
/*
Pointer Declaration and Initialization
Goal: Declare pointers for various data types and initialize 
them properly to point to existing variables or dynamically allocated memory. Use pointer arithmetic and typecasting appropriately.

Activity:

Declare pointers to different data types (int, float, char).
Dynamically allocate memory for these pointers.
Assign addresses of variables to pointers and access their 
values through the pointers.
Perform pointer arithmetic to move through allocated memory blocks.
Use typecasting to convert pointers between compatible types.
*/
#include<stdio.h>
#include<stdlib.h>
void Integer_Pointer();
void Float_Pointer();
void Char_Pointer();
void Pointer_Typecasting();
int main()
{
    Integer_Pointer();
    Float_Pointer();
    Char_Pointer();
    Pointer_Typecasting();   
    return 0;
}
void Integer_Pointer()
{
    int *iptr;
    iptr = (int *)malloc(3 * sizeof(int));
    if(iptr == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }
    *(iptr + 0) = 10;
    *(iptr + 1) = 20;
    *(iptr + 2) = 30;
    printf("Integer values:\n");
    for(int i=0;i<3;i++)
    {
        printf("%d ",*(iptr + i));
    }
    printf("\n");   
    free(iptr);
}
void Float_Pointer()
{
    float *fptr;
    fptr = (float *)malloc(2 * sizeof(float));
    if(fptr == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }
    *(fptr + 0) = 5.5;
    *(fptr + 1) = 10.5;
    printf("Float values:\n");
    for(int i=0;i<2;i++)
    {
        printf("%.2f ",*(fptr + i));
    }
    printf("\n");   
    free(fptr);
}
void Char_Pointer()
{
    char *cptr;
    cptr = (char *)malloc(3 * sizeof(char));
    if(cptr == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }
    *(cptr + 0) = 'A';
    *(cptr + 1) = 'B';
    *(cptr + 2) = 'C';
    printf("Character values:\n");
    for(int i=0;i<3;i++)
    {
        printf("%c ",*(cptr + i));
    }
    printf("\n");   
    free(cptr);
}
void Pointer_Typecasting()
{
    int a = 65;
    int *iptr = &a;
    char *cptr;
    cptr = (char *)iptr;
    printf("Integer value = %d\n",*iptr);    
    printf("After typecasting to char pointer = %c\n",*cptr);
}
