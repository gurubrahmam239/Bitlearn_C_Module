
/*
Print all characters that occur more than once in a string.
Input: "programming"
Output: r g m
*/
#include<stdio.h>
#include<string.h>
void Print_Duplicates(char str[])
{
    int freq[256]={0};
    for(int i=0;str[i]!='\0';i++)
    {
        freq[str[i]]++;
    }
    printf("Duplicate characters: ");
    for(int i=0;str[i]!='\0';i++)
    {
        if(freq[str[i]]>1)
        {
            printf("%c ",str[i]);
            freq[str[i]]=0;
        }
    }
}
int main()
{
    char str[100];
    printf("Enter the string:\n");
    scanf("%s",str);
    Print_Duplicates(str);
    return 0;
}