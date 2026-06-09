
/*
Pointer Arithmetic with Arrays
Goal: Learn how to access array elements using pointer arithmetic.

Activity:

Declare: int arr[5] = {10, 20, 30, 40, 50};
Use int *p = arr;
Use a loop to print all elements via *(p + i)
*/
#include<stdio.h>
void Print_Array(int *p,int size);
int main()
{
    int arr[5] = {10,20,30,40,50};
    int *p = arr;
    Print_Array(p,5);   
    return 0;
}
void Print_Array(int *p,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",*(p + i));
    }
}
