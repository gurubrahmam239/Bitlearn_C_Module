/*
Dynamic Memory Allocation
Goal: Allocate, reallocate, and free memory dynamically 
for different data types and structures while avoiding memory leaks.

Activity:

Allocate memory for an array using malloc.
Expand or shrink the allocated memory using realloc.
Initialize the allocated memory using calloc.
Free allocated memory after use.
Handle cases where allocation fails.
*/
#include<stdio.h>
#include<stdlib.h>
void Malloc_Array();
void Realloc_Array();
void Calloc_Array();
int main()
{
    Malloc_Array();
    Realloc_Array();
    Calloc_Array();
    return 0;
}

void Malloc_Array()
{
    int *ptr,n;
    printf("Enter size for malloc array:\n");
    scanf("%d",&n);
    ptr = (int *)malloc(n * sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }
    printf("Enter elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("Malloc array elements:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",ptr[i]);
    }
    printf("\n");
    free(ptr);
    ptr = NULL;
}

void Realloc_Array()
{
    int *ptr,n,new_size;
    printf("Enter initial size for realloc array:\n");
    scanf("%d",&n);
    ptr = (int *)malloc(n * sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }
    printf("Enter elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("Enter new size:\n");
    scanf("%d",&new_size);
    ptr = (int *)realloc(ptr,new_size * sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory reallocation failed\n");
        return;
    }
    printf("Enter new elements:\n");
    for(int i=n;i<new_size;i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("Reallocated array elements:\n");
    for(int i=0;i<new_size;i++)
    {
        printf("%d ",ptr[i]);
    }
    printf("\n");
    free(ptr);   
    ptr = NULL;
}
void Calloc_Array()
{
    int *ptr,n;
    printf("Enter size for calloc array:\n");
    scanf("%d",&n);
    ptr = (int *)calloc(n,sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }
    printf("Initial calloc values:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",ptr[i]);
    }
    printf("\n");
    free(ptr);    
    ptr = NULL;
}
