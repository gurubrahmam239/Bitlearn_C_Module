
/*
19. Program: Find first occurrence of a character in a given string
       Input: "elephant", find 'e'

        Output: Position: 0
*/
#include<stdio.h>
#include<string.h>
void Find_First_Occurrence(char str[],char ch)
{
    char *ptr=strchr(str,ch);
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
    scanf("%s", str);
    printf("Enter the character to find:\n");
    scanf(" %c", &ch);
    Find_First_Occurrence(str, ch);
    return 0;
}
