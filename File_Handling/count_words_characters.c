/*
Count both the number of words and the number of characters in a file.
Input: File name: info.txt (content: This is a test file.)
Output: Words: 5
Characters: 21
*/
#include<stdio.h>
#include<ctype.h>
void Count_Words_And_Characters(char filename[]);
int main()
{
    char filename[100];
    printf("Enter file name:\n");
    scanf("%s",filename);
    Count_Words_And_Characters(filename);   
    return 0;
}
void Count_Words_And_Characters(char filename[])
{
    FILE *fp;
    char ch;
    int words = 0;
    int characters = 0;
    int in_word = 0;
    fp = fopen(filename,"r");
    if(fp == NULL)
    {
        printf("File opening failed");
        return;
    }
    while((ch = fgetc(fp)) != EOF)
    {
        characters++;   
        if(isspace(ch))
        {
            in_word = 0;
        }
        else if(in_word == 0)
        {
            in_word = 1;
            words++;
        }
    }
    fclose(fp);
    printf("Words: %d\n",words);   
    printf("Characters: %d\n",characters);
}