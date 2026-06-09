
/*
Character Pointer and String Handling
Goal: Manipulate strings using character pointers and 
standard string library functions.

Activity:

Declare a character pointer and assign it to a string literal
 or dynamically allocated memory.
Use pointer arithmetic to traverse and modify the string.
Implement functions to concatenate, copy, or reverse strings
 using only pointers.
Understand how strings are stored and accessed in memory
 via pointers.
 */
#include<stdio.h>
#include<stdlib.h>
void String_Copy(char *dest,char *src);
void String_Concatenate(char *dest,char *src);
void Reverse_String(char *str);
void Print_String(char *str);
int main()
{
    char *str1;
    char *str2;
    str1 = (char *)malloc(100*sizeof(char));
    str2 = (char *)malloc(100*sizeof(char));
    if(str1==NULL || str2==NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }
    printf("Enter first string:\n");
    scanf(" %[^\n]",str1);
    printf("Enter second string:\n");
    scanf(" %[^\n]",str2);
    printf("\nOriginal first string:\n");
    Print_String(str1);
    printf("\nCopied string:\n");
    String_Copy(str2,str1);
    Print_String(str2);
    printf("\nConcatenated string:\n");
    String_Concatenate(str1," World");
    Print_String(str1);
    printf("\nReversed string:\n");
    Reverse_String(str1);
    Print_String(str1);
    free(str1);
    free(str2);
    str1 = NULL;
    str2 = NULL;
    return 0;
}

void String_Copy(char *dest,char *src)
{
    while(*src != '\0')
    {
        *dest = *src;   
        dest++;
        src++;
    }
    *dest = '\0';
}

void String_Concatenate(char *dest,char *src)
{
    while(*dest != '\0')
    {
        dest++;
    }
    while(*src != '\0')
    {
        *dest = *src;   
        dest++;
        src++;
    }
    *dest = '\0';
}

void Reverse_String(char *str)
{
    char *start = str;
    char *end = str;
    char temp;
    while(*end != '\0')
    {
        end++;
    }
    end--;
    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;       
        start++;
        end--;
    }
}
void Print_String(char *str)
{
    while(*str != '\0')
    {
        printf("%c",*str);
        str++;
    }   
    printf("\n");
} 
