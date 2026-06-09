/*
Open an existing file and display its contents on the screen.
Input: File name: test.txt
Output: Hello, this is my first file!
*/
#include<stdio.h>
int main()
{
    FILE *fp;
    char filename[100];
    char ch;
    printf("Enter file name:\n");
    scanf("%s",filename);
    fp = fopen(filename,"r");
    if(fp == NULL)
    {
        printf("File opening failed");
        return 0;
    }
    printf("File contents:\n");
    while((ch = fgetc(fp)) != EOF)
    {
        printf("%c",ch);
    }
    fclose(fp);   
    return 0;
}