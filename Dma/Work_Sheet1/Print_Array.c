
/*
Exercise 2: Allocate and Store a List of Integers
Goal: Practice allocating memory for an array of integers.
Activity: 
Ask the user to enter the number of integers.
Allocate memory dynamically using malloc based on input.
Use a loop to take integer inputs into the allocated array.
Display the entered values.
Free the allocated memory.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,n;
    printf("Enter number of integers:\n");
    scanf("%d",&n);
    ptr = (int*)malloc(n*sizeof(int));
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
    printf("Entered elements are:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",ptr[i]);
    }
    free(ptr);
    ptr = NULL;   
    return 0;
}