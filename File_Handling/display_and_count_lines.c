/*
Show all the contents in a file and also print the total number of lines.
Input: File name: lines.txt
Output: (shows all lines)
Total lines: 5
*/
#include<stdio.h>
void Display_File_And_Count_Lines(char filename[]);
int main()
{
    char filename[100];
    printf("Enter file name:\n");
    scanf("%s",filename);
    Display_File_And_Count_Lines(filename);   
    return 0;
}
void Display_File_And_Count_Lines(char filename[])
{
    FILE *fp;
    char ch;
    int lines = 0;
    fp = fopen(filename,"r");
    if(fp == NULL)
    {
        printf("File opening failed");
        return;
    }
    printf("File contents:\n");
    while((ch = fgetc(fp)) != EOF)
    {
        printf("%c",ch);   
        if(ch == '\n')
        {
            lines++;
        }
    }
    fclose(fp);
    printf("\nTotal lines: %d",lines);
}