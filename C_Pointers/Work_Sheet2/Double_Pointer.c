
/*
Pointer to Pointer (Double Pointer)
Goal: Understand how to use double pointers for 
indirect referencing and dynamic memory management.

Activity:

Declare a double pointer and use it to dynamically
 allocate memory for a single variable or an array.
Access and modify the allocated memory via the double pointer.
Pass double pointers to functions to dynamically allocate
 or modify memory inside the function.
 */
#include<stdio.h>
#include<stdlib.h>
void Allocate_Memory(int **ptr,int size);
void Print_Array(int *ptr,int size);
void Modify_Array(int *ptr,int size);
int main()
{
    int *ptr = NULL;
    int size;
    printf("Enter size of array:\n");
    scanf("%d",&size);
    Allocate_Memory(&ptr,size);
    if(ptr == NULL)
    {
        return 0;
    }
    printf("Enter array elements:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("Original array:\n");
    Print_Array(ptr,size);
    Modify_Array(ptr,size);
    printf("Modified array:\n");
    Print_Array(ptr,size);
    free(ptr);
    ptr = NULL;   
    return 0;
}
void Allocate_Memory(int **ptr,int size)
{
    *ptr = (int *)malloc(size*sizeof(int));   
    if(*ptr==NULL)
    {
        printf("Memory allocation failed\n");
    }
}
void Print_Array(int *ptr,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",ptr[i]);
    }   
    printf("\n");
}
void Modify_Array(int *ptr,int size)
{
    for(int i=0;i<size;i++)
    {
        ptr[i]=ptr[i]*2;
    }
}