
/*
Array Index vs Pointer Arithmetic
Goal: Understand that arr[i] and *(arr + i) give the same result.
Activity:
Use both arr[i] and *(arr + i) to print array elements.
Confirm outputs are the same.
*/
#include<stdio.h>
void Print_Array(int arr[],int size);
int main()
{
    int arr[5] = {10,20,30,40,50};
    Print_Array(arr,5);   
    return 0;
}
void Print_Array(int arr[],int size)
{
    printf("Using array index:\n");   
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}