
/*
Exercise 18: Insert Element at Any Position
Goal: Modify dynamic array and shift elements.

Activity:

Allocate memory for an array.
Accept n values.
Ask user to insert a value at a specific position.
Use realloc to increase size.
Shift elements and insert new value.
Print final array and free memory.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,n,pos,value;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("Enter position to insert:\n");
    scanf("%d",&pos);
    printf("Enter value to insert:\n");
    scanf("%d",&value);
    n++;
    ptr = (int *)realloc(ptr,n*sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory reallocation failed");
        return 0;
    }
    for(int i=n-1;i>pos;i--)
    {
        ptr[i]=ptr[i-1];
    }
    ptr[pos]=value;
    printf("Final array is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",ptr[i]);
    }
    free(ptr);
    ptr = NULL;    
    return 0;
}
