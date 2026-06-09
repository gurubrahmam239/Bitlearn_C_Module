/*
Take everything from one file and append it to the end of another file.
Input: File1: main.txt (Main)
File2: extra.txt (Extra)
Output: main.txt now contains: Main, Extra
*/
#include<stdio.h>
void Append_File(char mainfile[],char extrafile[]);
int main()
{
    char mainfile[100];
    char extrafile[100];
    printf("Enter main file name:\n");
    scanf("%s",mainfile);
    printf("Enter extra file name:\n");
    scanf("%s",extrafile);
    Append_File(mainfile,extrafile);   
    return 0;
}
void Append_File(char mainfile[],char extrafile[])
{
    FILE *fp1;
    FILE *fp2;
    char ch;
    fp1 = fopen(mainfile,"a");
    fp2 = fopen(extrafile,"r");
    if(fp1 == NULL || fp2 == NULL)
    {
        printf("File opening failed");
        return;
    }
    fputc('\n',fp1);
    while((ch = fgetc(fp2)) != EOF)
    {
        fputc(ch,fp1);
    }
    fclose(fp1);
    fclose(fp2);   
    printf("Contents appended successfully");
}