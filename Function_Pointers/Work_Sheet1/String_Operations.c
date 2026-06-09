
/*
Function Pointer Array for String Operations
Implement several string manipulation functions 
(reverseString, toUpperCase, countVowels), each accepting a
 string argument.
Store these functions in an array of function pointers.
Prompt the user to choose an operation and apply it to their
 input string using the selected function pointer.
 */
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void Reverse_String(char str[]);
void To_Upper_Case(char str[]);
void Count_Vowels(char str[]);
int main()
{
    char str[100];
    int choice;
    void (*String_Operation[3])(char []) =
    {
        Reverse_String,
        To_Upper_Case,
        Count_Vowels
    };
    printf("Enter the string:\n");
    scanf(" %[^\n]",str);
    printf("1.Reverse String\n");
    printf("2.To Upper Case\n");
    printf("3.Count Vowels\n");
    printf("Enter your choice:\n");
    scanf("%d",&choice);
    if(choice < 1 || choice > 3)
    {
        printf("Invalid choice");
        return 0;
    }
    String_Operation[choice-1](str);   
    return 0;
}
void Reverse_String(char str[])
{
    int len,temp;
    len = strlen(str);
    for(int i=0;i<len/2;i++)
    {
        temp = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = temp;
    }   
    printf("Reversed string: %s",str);
}
void To_Upper_Case(char str[])
{
    for(int i=0;str[i]!='\0';i++)
    {
        str[i]-=32;
    }   
    printf("Uppercase string: %s",str);
}
void Count_Vowels(char str[])
{
    int count = 0;
    for(int i=0;str[i]!='\0';i++)
    {
        char ch = tolower(str[i]);   
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        {
            count++;
        }
    }   
    printf("Number of vowels: %d",count);
}