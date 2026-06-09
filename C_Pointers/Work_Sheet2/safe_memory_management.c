
/*
Memory Management and Buffer Overflow Prevention
Goal: Implement safe memory handling practices to prevent 
buffer overflows and related security issues.

Activity:

Allocate buffers dynamically to match expected input sizes.
Use safe input functions that limit the number of characters read.
Validate input sizes before copying or appending to buffers.
Practice freeing memory correctly to avoid leaks or dangling pointers.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void Read_String(char *str,int size);
void Copy_String(char *dest,char *src,int size);
void Append_String(char *dest,char *src,int size);
int main()
{
    char *str1;
    char *str2;
    int size1,size2;
    printf("Enter size for first string:\n");
    scanf("%d",&size1);
    printf("Enter size for second string:\n");
    scanf("%d",&size2);
    getchar();
    str1 = (char *)malloc(size1 * sizeof(char));
    str2 = (char *)malloc(size2 * sizeof(char));
    if(str1 == NULL || str2 == NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }
    printf("Enter first string:\n");
    Read_String(str1,size1);
    printf("Enter second string:\n");
    Read_String(str2,size2);
    printf("\nCopied string:\n");
    char *copy = (char *)malloc(size1 * sizeof(char));
    if(copy == NULL)
    {
        printf("Memory allocation failed");
        free(str1);
        free(str2);
        return 0;
    }
    Copy_String(copy,str1,size1);
    printf("%s\n",copy);
    printf("\nAppending second string to first string:\n");
    Append_String(str1,str2,size1);
    printf("%s\n",str1);
    free(str1);
    free(str2);
    free(copy);
    str1 = NULL;
    str2 = NULL;
    copy = NULL;
    return 0;
}

void Read_String(char *str,int size)
{
    fgets(str,size,stdin);
    str[strlen(str)-1]=0;
}

void Copy_String(char *dest,char *src,int size)
{
    strncpy(dest,src,size - 1);   
    dest[size - 1] = '\0';
}
void Append_String(char *dest,char *src,int size)
{
    int current_length = strlen(dest);
    int remaining_space = size - current_length - 1;   
    if(remaining_space > 0)
    {
        strncat(dest,src,remaining_space);
    }
    else
    {
        printf("No space available for concatenation\n");
    }
}