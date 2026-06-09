
/*
Dangling Pointer Scenario
Goal: Identify potential risks and behavior of dangling pointers in embedded dynamic memory management.
Activity:
Write a function that allocates a block of memory dynamically using malloc() and returns the pointer:
int *allocate_buffer(void) {
  int *buf = (int *)malloc(10 * sizeof(int));
  return buf;
}
In the calling context, free the memory pointed to and then try to access it via the original pointer.
Use debug prints or debugger to observe system behavior.
*/
#include<stdio.h>
#include<stdlib.h>
int *Allocate_Buffer(void);
int main()
{
    int *ptr;
    ptr = Allocate_Buffer();
    if(ptr == NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }
    for(int i=0;i<10;i++)
    {
        ptr[i]=i+1;
    }
    printf("Buffer values before free:\n");
    for(int i=0;i<10;i++)
    {
        printf("%d ",ptr[i]);
    }
    printf("\n");
    free(ptr);
    printf("\nMemory freed\n");
    // Dangling pointer access
    // Undefined behavior may occur
    printf("Accessing memory after free:\n");
    printf("%d\n",ptr[0]);
    // Fix dangling pointer
    ptr = NULL;   
    return 0;
}
int *Allocate_Buffer(void)
{
    int *buf;
    buf = (int *)malloc(10 * sizeof(int));   
    return buf;
}
