
/*
Given a list of strings and a word, print the strings containing all characters of that word.
Input: Word = "act", List = ["cat", "tac", "act", "dog"]
Output: "cat", "tac", "act"
*/
#include<stdio.h>
#include<string.h>
int Contains_All_Characters(char str[], char word[])
{
    for(int i = 0; word[i] != '\0'; i++)
    {
        if(strchr(str, word[i]) == NULL)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char word[50];
    char list[100][50];
    int n;
    printf("Enter the word:\n");
    scanf("%s",word);
    printf("Enter number of strings:\n");
    scanf("%d",&n);
    printf("Enter the strings:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%s",list[i]);
    }
    printf("Matching strings:\n");
    for(int i=0;i<n;i++)
    {
        if(Contains_All_Characters(list[i],word))
        {
            printf("%s\n",list[i]);
        }
    }
    return 0;
}
