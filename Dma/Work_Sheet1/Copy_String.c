
/*
Exercise 7: Dynamic String Input
Goal: Handle strings with dynamic memory allocation.
Activity:
Ask the user to enter a string.
Find its length using strlen.
Allocate memory to store the string using malloc.
Copy the string to the new memory.
Print the copied string.
Free the memory.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[100];
    char *ptr;
    int len;
    printf("Enter the string:\n");
    fgets(str,100,stdin);
    str[strlen(str)-1]=0;
    len=strlen(str);
    ptr=(char *)malloc((len+1)*sizeof(char));
    if(ptr==NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }
    strcpy(ptr,str);
    printf("Copied string is:\n");
    printf("%s",ptr);
    free(ptr);
    ptr = NULL;   
    return 0;
}