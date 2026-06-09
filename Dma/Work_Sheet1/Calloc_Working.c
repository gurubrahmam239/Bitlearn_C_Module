
/*
Exercise 3: Zero-Initialize an Integer Array
Goal: Understand how calloc initializes memory.
Activity: 
Ask the user for the number of elements.
Allocate memory using calloc.
Print the initial values (before user input).
Assign values, then display them.
Free the memory after use.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,n;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    ptr = (int *)calloc(n,sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }
    printf("Initial values are:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",ptr[i]);
    }
    printf("\nEnter the elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("Entered elements are:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",ptr[i]);
    }
    free(ptr);
    ptr = NULL;    
    return 0;
}
