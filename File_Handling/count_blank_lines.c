/*
Count how many empty (blank) lines are in a file.
Input: File: data.txt
Output: Blank lines: 1
*/
#include<stdio.h>
#include<string.h>
void Count_Blank_Lines(char filename[]);
int main()
{
    char filename[100];
    printf("Enter file name:\n");
    scanf("%s",filename);
    Count_Blank_Lines(filename);    
   return 0;
}
void Count_Blank_Lines(char filename[])
{
    FILE *fp;
    char line[200];
    int count = 0;
    fp = fopen(filename,"r");
    if(fp == NULL)
    {
        printf("File opening failed");
        return;
    }
    while(fgets(line,sizeof(line),fp) != NULL)
    {
        if(strcmp(line,"\n") == 0)
        {
            count++;
        }
    }
    fclose(fp);   
    printf("Blank lines: %d",count);
}