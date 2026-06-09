
/*
7. Program: Replace all occurrences of a character with another in a string
         Input: "banana", replace 'a' with 'o'

         Output: "bonono"
         */
#include<stdio.h>
void Replace_Character(char str[], char Old_Char, char New_Char)
{
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==Old_Char)
        {
            str[i]=New_Char;
        }
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
    Replace_Character(str,Old_Char,New_Char);
    printf("Output: %s",str);
    return 0;
}
