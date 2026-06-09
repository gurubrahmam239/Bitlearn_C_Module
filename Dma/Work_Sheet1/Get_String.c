
/*
Exercise 11: Accept Characters Until Enter Pressed
Goal: Dynamically grow a string buffer with realloc.
Activity:
Start with a small buffer.
Accept characters one by one.
Reallocate buffer each time a new character is added.
Stop on newline character.
Null-terminate and print the string.
Free the memory.
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char *ptr;
    char ch;
    int size = 1;
    int index = 0;
    ptr = (char *)malloc(size * sizeof(char)); 
    if(ptr == NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }
    printf("Enter characters:\n");
    while((ch=getchar())!='\n')
    {
        ptr[index] = ch;
        index++;
        size++;
        ptr = (char *)realloc(ptr,size*sizeof(char));
        if(ptr==NULL)
        {
            printf("Memory reallocation failed");
            return 0;
        }
    }
    ptr[index]=0;
    printf("Entered string is:\n");
    printf("%s",ptr);
    free(ptr);
    ptr = NULL;    
    return 0;
}
