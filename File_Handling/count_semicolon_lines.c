/*
Count how many lines in a file end with a semicolon.
Input: File: data.txt (lines, some end with ;)
Output: Lines ending with semicolon: 2
*/
#include<stdio.h>
#include<string.h>
void Count_Semicolon_Lines(char filename[]);
int main()
{
    char filename[100];
    printf("Enter file name:\n");
    scanf("%s",filename);
    Count_Semicolon_Lines(filename);   
    return 0;
}
void Count_Semicolon_Lines(char filename[])
{
    FILE *fp;
    char line[200];
    int count = 0;
    int length;
    fp = fopen(filename,"r");
    if(fp == NULL)
    {
        printf("File opening failed");
        return;
    }
    while(fgets(line,sizeof(line),fp) != NULL)
    {
        length = strlen(line);   
        if(line[length - 2] == ';')
        {
            count++;
        }
    }
    fclose(fp);
    printf("Lines ending with semicolon: %d",count);
}