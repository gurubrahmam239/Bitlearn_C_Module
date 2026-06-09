/*
Count how many lines are present in a text file.
Input: File name: lines.txt
Output: Total lines: 5
*/
#include<stdio.h>
int Count_Lines(char filename[]);
int main()
{
    char filename[100];
    int lines;
    printf("Enter file name:\n");
    scanf("%s",filename);
    lines = Count_Lines(filename);
    if(lines != -1)
    {
        printf("Total lines: %d",lines);
    }    
   return 0;
}
int Count_Lines(char filename[])
{
    FILE *fp;
    char ch;
    int count = 0;
    fp = fopen(filename,"r");
    if(fp == NULL)
    {
        printf("File opening failed");   
        return -1;
    }
    while((ch = fgetc(fp)) != EOF)
    {
        if(ch == '\n')
        {
            count++;
        }
    }
    fclose(fp);   
    return count;
}