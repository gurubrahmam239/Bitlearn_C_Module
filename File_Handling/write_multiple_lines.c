/*
Take several lines from the user and write all of them into a file.
Input: File name: lines.txt
Number of lines: 3
Lines: Line one, Line two, Line three
Output: All lines saved in 'lines.txt'.
*/
#include<stdio.h>
void Write_Lines_To_File(char filename[],int n);
int main()
{
    char filename[100];
    int n;
    printf("Enter file name:\n");
    scanf("%s",filename);
    printf("Enter number of lines:\n");
    scanf("%d",&n);
    getchar();
    Write_Lines_To_File(filename,n);
    printf("All lines saved in '%s'",filename);   
    return 0;
}
void Write_Lines_To_File(char filename[],int n)
{
    FILE *fp;
    char line[200];
    fp = fopen(filename,"w");
    if(fp == NULL)
    {
        printf("File opening failed");
        return;
    }
    printf("Enter lines:\n");
    for(int i=0;i<n;i++)
    {
        fgets(line,sizeof(line),stdin);   
        fputs(line,fp);
    }   
    fclose(fp);
}


