
/*
Exercise 13: Memory Leak Simulation
Goal: Understand what a memory leak is.
Activity:
Allocate memory using malloc and assign values.
Intentionally skip free().
Run the program with tools like valgrind to observe the leak.
Fix the leak by adding proper free()
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }
    printf("Enter 5 elements:\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("Elements are:\n");
    for(int i=0;i<5;i++)
    {
        printf("%d ",ptr[i]);
    }
    // free(ptr);// Memory leak occurs if this is skipped
    free(ptr);// Fixing memory leak
    ptr = NULL;   
    return 0;
}