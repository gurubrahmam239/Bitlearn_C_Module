
/*
17. Program: Find last occurrence of a character in a string
        Input: "ababcabc", find 'b'

        Output: Position: 6
*/
#include<stdio.h>
#include<string.h>
void Find_Last_Occurrence(char str[],char ch)
{
    char *ptr=strrchr(str,ch);
    if(ptr!=NULL)
    {
        int position=ptr-str;
        printf("Position: %d",position);
    }
    else
    {
        printf("Character not found");
    }
}
int main()
{
    char str[100], ch;
    printf("Enter the string:\n");
    scanf("%s",str);
    printf("Enter the character to find:\n");
    scanf(" %c",&ch);
    Find_Last_Occurrence(str, ch);
    return 0;
}
