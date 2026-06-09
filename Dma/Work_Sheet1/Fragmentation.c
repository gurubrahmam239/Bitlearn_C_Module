
/*
Exercise 20: Simulate Memory Fragmentation
Goal: Understand fragmentation with sequential malloc and free.

Activity:

Allocate multiple memory blocks of varying sizes.
Free some in between.
Allocate a new block that fits only in fragmented space.
Observe behavior.
Free all at the end.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr1,*ptr2,*ptr3,*ptr4;
    ptr1 = (int *)malloc(10*sizeof(int));
    ptr2 = (int *)malloc(20*sizeof(int));
    ptr3 = (int *)malloc(30*sizeof(int));
    if(ptr1==NULL || ptr2==NULL || ptr3==NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }
    printf("Initial memory blocks allocated\n");
    free(ptr2);
    ptr2=NULL;
    printf("Middle block freed\n");
    ptr4=(int *)malloc(15 * sizeof(int));
    if(ptr4==NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }
    printf("New block allocated in fragmented space\n");
    free(ptr1);
    free(ptr3);
    free(ptr4);
    ptr1 = NULL;
    ptr3 = NULL;
    ptr4 = NULL;   
    return 0;
}