
/*
Check whether a given string is a palindrome, i.e., it reads the same forwards and backwards.
Input: "madam"
Output: Palindrome
*/
#include<stdio.h>
#include<string.h>

void Check_Palindrome(char str[])
{
    int start = 0;
    int end=strlen(str)-1;
    int Flag_Palindrome=1;
    while(start<end)
    {
        if(str[start]!=str[end])
        {
            Flag_Palindrome = 0;
            break;
        }
        start++;
        end--;
    }
    if(Flag_Palindrome)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}
int main()
{
    char str[100];
    printf("Enter the string:\n");
    scanf("%s", str);
    Check_Palindrome(str);
    return 0;
}
