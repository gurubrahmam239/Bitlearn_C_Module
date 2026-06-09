
/*
13. Program: Remove last occurrence of a character from string
          Input: "mississippi", remove 's'

          Output: "missipippi"
*/
#include<stdio.h>
#include<string.h>
void Remove_Last_Occurrence(char str[],char ch)
{
    char *ptr=strrchr(str,ch);
    if(ptr!=NULL)
    {
        memmove(ptr,ptr+1,strlen(ptr));
    }
    else
    {
        printf("No Character Found\n");
    }
}
int main()
{
    char str[100],ch;
    printf("Enter the string:\n");
    scanf("%s",str);
    printf("Enter character to remove:\n");
    scanf(" %c",&ch);
    Remove_Last_Occurrence(str,ch);
    printf("Output: %s",str);
    return 0;
}
