
/*
1. Pointer Declaration and Initialization
Goal: Understand how to declare a pointer and store
 the address of a variable.
Activity:
Declare an integer variable: int a = 5;
Declare a pointer to int: int *ptr;
Assign the address of a to ptr: ptr = &a;
Print both a and *ptr using printf.
*/
#include<stdio.h>
int main()
{
    int a = 5;
    int *ptr;
    ptr = &a;
    printf("Value of a = %d\n",a);
    printf("Value using pointer = %d",*ptr);    
    return 0;
}
