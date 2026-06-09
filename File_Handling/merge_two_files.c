/*
Join two files together and save the result in a new file.
Input: File 1: a.txt (AAA)
File 2: b.txt (BBB)
New file: ab.txt
Output: ab.txt content: AAA
BBB
*/
#include<stdio.h>
void Merge_Files(char file1[],
char file2[],
char newfile[]);
int main()
{
    char file1[100];
    char file2[100];
    char newfile[100];
    printf("Enter first file name:\n");
    scanf("%s",file1);
    printf("Enter second file name:\n");
    scanf("%s",file2);
    printf("Enter new file name:\n");
    scanf("%s",newfile);
    Merge_Files(file1,file2,newfile);   
    return 0;
}
void Merge_Files(char file1[],
char file2[],
char newfile[])
{
    FILE *fp1;
    FILE *fp2;
    FILE *fp3;
    char ch;
    fp1 = fopen(file1,"r");
    fp2 = fopen(file2,"r");
    fp3 = fopen(newfile,"w");
    if(fp1 == NULL || fp2 == NULL || fp3 == NULL)
    {
        printf("File opening failed");
        return;
    }
    while((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch,fp3);
    }
    fputc('\n',fp3);
    while((ch = fgetc(fp2)) != EOF)
    {
        fputc(ch,fp3);
    }
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);   
    printf("Files merged successfully");
}