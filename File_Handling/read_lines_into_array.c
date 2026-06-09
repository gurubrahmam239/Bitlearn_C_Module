/*
Read every line from a file and store those lines in an array.
Input: File name: lines.txt
Output: Line one, Line two, Line three (as array elements)
*/
#include<stdio.h>
#include<string.h>
void Read_Lines_From_File(char filename[]);
int main()
{
    char filename[100];
    printf("Enter file name:\n");
    scanf("%s",filename);
    Read_Lines_From_File(filename);   
    return 0;
}
void Read_Lines_From_File(char filename[])
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
        lines[count][strcspn(lines[count],"\n")] = '\0';   
        count++;
    }
    fclose(fp);
    printf("Lines stored in array:\n");   
    for(int i=0;i<count;i++)
    {
        printf("%s\n",lines[i]);
    }
}