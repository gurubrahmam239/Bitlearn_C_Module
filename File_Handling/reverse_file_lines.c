/*
Display the lines of a file in reverse order (from last to first).
Input: File name: lines.txt
Output: Shows lines from bottom to top
*/
#include<stdio.h>
#include<string.h>
void Display_Reverse_Lines(char filename[]);
int main()
{
    char filename[100];
    printf("Enter file name:\n");
    scanf("%s",filename);
    Display_Reverse_Lines(filename);   
    return 0;
}
void Display_Reverse_Lines(char filename[])
{
    FILE *fp;
    char lines[100][200];
    int count = 0;
    fp = fopen(filename,"r");
    if(fp == NULL)
    {
        printf("File opening failed");
        return;
    }
    while(fgets(lines[count],200,fp) != NULL)
    {
        count++;
    }
    fclose(fp);
    printf("Lines in reverse order:\n");   
    for(int i=count - 1;i>=0;i--)
    {
        printf("%s",lines[i]);
    }
}