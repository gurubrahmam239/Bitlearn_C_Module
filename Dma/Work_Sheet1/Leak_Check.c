
/*
Exercise 16: Safe Memory Allocation Check
Goal: Practice error-checking after allocation.

Activity:

Try allocating a large chunk of memory (e.g., 1GB).
Check if the pointer is NULL.
If successful, print a success message.
If failed, handle the error gracefully.
Free if allocation succeeded.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *ptr;
    ptr = (char *)malloc(1024L*1024L*1024L);
    if(ptr==NULL)
    {
        printf("Memory allocation failed");
    }
    else
    {
        printf("Memory allocation successful");
        free(ptr);   
        ptr=NULL;
    }    
    return 0;
}
