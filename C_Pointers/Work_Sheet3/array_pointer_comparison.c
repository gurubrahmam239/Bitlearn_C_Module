
/*
Pointer and Array Behavior
Goal: Analyze how pointers and arrays differ in memory 
referencing and sizeof operations in embedded systems.
Activity:
Declare an integer array with predefined elements.
int arr[5] = {10, 20, 30, 40, 50};
Declare an integer pointer and assign it to the array's
 base address
 int *ptr = arr;
 Print the values of the array name, the pointer, and the address of the array.
Use sizeof() on the array and pointer and observe differences.
Access the elements via both array indexing and pointer arithmetic, and print them.
*/
#include<stdio.h>
void Print_Elements(int arr[],int *ptr,int size);
int main()
{
    int arr[5] = {10,20,30,40,50};
    int *ptr = arr;
    printf("Value of array name = %p\n",arr);
    printf("Value of pointer = %p\n",ptr);
    printf("Address of array = %p\n",&arr);
    printf("\nSize of array = %lu\n",sizeof(arr));
    printf("Size of pointer = %lu\n",sizeof(ptr));
    printf("\nArray elements:\n");
    Print_Elements(arr,ptr,5);
    return 0;
}

void Print_Elements(int arr[],int *ptr,int size)
{
    printf("Using array indexing:\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Using pointer arithmetic:\n");   
    for(int i=0;i<size;i++)
    {
        printf("%d ",*(ptr + i));
    }
}