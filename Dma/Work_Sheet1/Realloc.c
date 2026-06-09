
/*
Exercise 5: Reallocate an Array Dynamically
Goal: Use realloc to extend an array as needed.
Activity:
Allocate memory for 2 integers.
Ask the user for values.
Then resize the array to 5 integers using realloc.
Accept more values into the resized array.
Print all values.
Free the memory at the end.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)malloc(2*sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }
    printf("Enter 2 elements:\n");
    for(int i=0;i<2;i++)
    {
        scanf("%d",&ptr[i]);
    }
    ptr = (int *)realloc(ptr,5*sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory reallocation failed");
        return 0;
    }
    printf("Enter 3 more elements:\n");
    for(int i=2;i<5;i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("All elements are:\n");
    for(int i=0;i<5;i++)
    {
        printf("%d ",ptr[i]);
    }
    free(ptr);
    ptr = NULL;    
    return 0;
}
