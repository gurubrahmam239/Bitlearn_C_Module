
/*
14. Program: Replace first occurrence of a character with another in a string
         Input: "google", replace 'o' with 'a'

         Output: "gagole"
*/
#include<stdio.h>
#include<string.h>
void Replace_First_Occurrence(char str[],char Old_Char,char New_Char)
{
    char *ptr=strchr(str,Old_Char);
    if(ptr!=NULL)
    {
        *ptr=New_Char;
    }
}
int main()
{
    char str[100];
    char Old_Char,New_Char;
    printf("Enter the string:\n");
    scanf("%s",str);
    printf("Enter the character to replace:\n");
    scanf(" %c",&Old_Char);
    printf("Enter the new character:\n");
    scanf(" %c",&New_Char);
    Replace_First_Occurrence(str,Old_Char,New_Char);
    printf("Output: %s", str);
    return 0;
}
