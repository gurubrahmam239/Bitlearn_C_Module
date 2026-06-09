
/*
Exercise 10: Log Session and Reverse an Array
Goal: Use pointers to reverse dynamically allocated memory.
Activity:
Allocate an array of integers using malloc.
Accept n values.
Reverse the array using pointer arithmetic (not indexing).
Print reversed values.
Free the memory.
*/
#include<stdio.h>
#include<stdlib.h>
void Reverse_Array(int *start,int *end);
void Print_Array(int *ptr,int n);
int main()
{
    int *ptr,n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    ptr = (int *)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    Reverse_Array(ptr,ptr+n-1);
    printf("Reversed array is:\n");
    Print_Array(ptr,n);
    free(ptr);
    ptr=NULL;   
    return 0;
}
void Reverse_Array(int *start,int *end)
{
    while(start<end)
    {
        int temp=*start;
        *start=*end;
        *end=temp;       
        start++;
        end--;
    }
}
void Print_Array(int *ptr,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(ptr + i));
    }
}