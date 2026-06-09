
/*
9. Program: Find first occurrence of a word in a given string
         Input: "this is a test string", word: "test"

         Output: Found at position 11
*/
#include<stdio.h>
#include<string.h>
void Find_Word(char str[],char word[])
{
    char *ptr=strstr(str,word);
    if(ptr!=NULL)
    {
        int position=ptr-str;
        printf("Found at position %d",position);
    }
    else
    {
        printf("Word not found");
    }
}
int main()
{
    char str[100], word[50];
    printf("Enter the string:\n");
    fgets(str, sizeof(str), stdin);
    printf("Enter the word to search:\n");
    scanf("%s", word);
    str[strlen(str)-1]=0;
    Find_Word(str,word);
    return 0;
}
