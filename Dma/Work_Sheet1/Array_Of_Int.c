
/*
Exercise 19: Dynamic Array of Pointers to Integers
Goal: Work with array of pointers using malloc.

Activity:

Ask user for count.
Allocate array of int* pointers.
Use malloc to assign an integer for each pointer.
Assign and print values.
Free all integers and the array.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **ptr;
    int n;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    ptr = (int **)malloc(n*sizeof(int *));
    if(ptr==NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        ptr[i]=(int *)malloc(sizeof(int));
        if(ptr[i]==NULL)
        {
            printf("Memory allocation failed");
            return 0;
        }
    }
    printf("Enter the values:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",ptr[i]);
    }
    printf("Values are:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",*ptr[i]);
    }
    for(int i=0;i<n;i++)
    {
        free(ptr[i]);
        ptr[i] = NULL;
    }
    free(ptr);
    ptr = NULL;    
    return 0;
}
