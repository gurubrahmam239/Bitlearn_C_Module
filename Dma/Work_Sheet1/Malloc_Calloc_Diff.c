
/*
Exercise 4: Compare malloc and calloc
Goal: Learn the key difference between malloc and calloc.
Activity:
Allocate two arrays using malloc and calloc with the same size.
Print the default values in both arrays.
Use a loop for printing to understand initialization differences.
Free both arrays.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr1,*ptr2,n;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    ptr1 = (int *)malloc(n*sizeof(int));
    ptr2 = (int *)calloc(n,sizeof(int));
    if(ptr1==NULL || ptr2==NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }
    printf("Values in malloc array:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",ptr1[i]);
    }
    printf("\nValues in calloc array:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",ptr2[i]);
    }
    free(ptr1);
    free(ptr2);
    ptr1 = NULL;
    ptr2 = NULL;    
    return 0;
}
