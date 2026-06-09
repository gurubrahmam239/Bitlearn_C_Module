
/*
Array and Pointer Arithmetic
Goal: Traverse and manipulate arrays by using pointers
 and pointer arithmetic instead of array indexing.

Activity:

Log Session an array of integers.
Use a pointer to iterate through the array elements by 
incrementing the pointer.
Perform operations like summing the elements or modifying 
them using only the pointer (no array indices).
Implement a function that receives a pointer and size to
 reverse the array elements in place.
 */
#include<stdio.h>
void Print_Array(int *ptr,int size);
void Sum_Of_Array(int *ptr,int size);
void Modify_Array(int *ptr,int size);
void Reverse_Array(int *start,int *end);
int main()
{
    int arr[100],size;
    printf("Enter size of array:\n");
    scanf("%d",&size);
    printf("Enter array elements:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Original array:\n");
    Print_Array(arr,size);
    Sum_Of_Array(arr,size);
    Modify_Array(arr,size);
    printf("\nModified array:\n");
    Print_Array(arr,size);
    Reverse_Array(arr,arr + size - 1);
    printf("\nReversed array:\n");
    Print_Array(arr,size);
    return 0;
}

void Print_Array(int *ptr,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",*(ptr + i));
    }   
    printf("\n");
}
void Sum_Of_Array(int *ptr,int size)
{
    int sum = 0;
    for(int i=0;i<size;i++)
    {
        sum = sum + *(ptr + i);
    }   
    printf("Sum of array = %d\n",sum);
}
void Modify_Array(int *ptr,int size)
{
    for(int i=0;i<size;i++)
    {
        *(ptr + i) = *(ptr + i) + 1;
    }
}
void Reverse_Array(int *start,int *end)
{
    int temp;
    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;        
        start++;
        end--;
    }
}
