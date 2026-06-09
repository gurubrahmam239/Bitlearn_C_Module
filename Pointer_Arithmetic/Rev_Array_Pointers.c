
/*
Question 9: Reverse Array using Pointer Arithmetic
Task: Write a function that reverses an 
integer array in place using pointer arithmetic only
 (no array indexing).
*/
#include<stdio.h>
void Reverse_Array(int *start,int *end);
int main()
{
    int arr[100],n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    Reverse_Array(arr,arr+n-1);
    printf("Reversed array:\n");   
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
void Reverse_Array(int *start,int *end)
{
    while(start < end)
    {
        int temp = *start;
        *start = *end;
        *end = temp;        
        start++;
        end--;
    }
}
