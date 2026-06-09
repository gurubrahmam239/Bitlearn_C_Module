/*
Find out how big a file is (in bytes).
Input: File name: a.txt
Output: Size: 36 bytes
*/
#include<stdio.h>
void Find_File_Size(char filename[]);
int main()
{
    char filename[100];
    printf("Enter file name:\n");
    scanf("%s",filename);
    Find_File_Size(filename);   
    return 0;
}
void Find_File_Size(char filename[])
{
    FILE *fp;
    long size;
    fp = fopen(filename,"r");
    if(fp == NULL)
    {
        printf("File opening failed");
        return;
    }
    fseek(fp,0,SEEK_END);
    size = ftell(fp);
    fclose(fp);   
    printf("Size: %ld bytes",size);
}