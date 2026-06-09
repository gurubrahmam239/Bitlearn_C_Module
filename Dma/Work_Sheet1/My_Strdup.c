
/*
Exercise 8: Implement Custom strdup()
Goal: Practice duplicating a string using dynamic memory.
Activity:
Log Session a function that takes a string as input.
Allocate memory for a copy of the string.
Copy character by character.
Return the copied string.
Call this function and display the result.
Free the copied string.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *My_Strdup(char *str);

int main()
{
    char str[100];
    char *copy;
    printf("Enter the string:\n");
    fgets(str,100,stdin);
    str[strlen(str)-1]=0;
    copy=My_Strdup(str);
    if(copy==NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }
    printf("Copied string is:\n");
    printf("%s",copy);
    free(copy);
    copy=NULL;   
    return 0;
}
char *My_Strdup(char *str)
{
    int len=strlen(str);
    char *ptr=(char *)malloc((len+1)*sizeof(char));
    if(ptr==NULL)
    {
        return NULL;
    }
    for(int i=0;str[i];i++)
    {
        ptr[i]=str[i];
    }
    ptr[len]=0;   
    return ptr;
}