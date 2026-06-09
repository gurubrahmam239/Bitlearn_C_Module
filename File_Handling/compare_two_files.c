/*
Check if two files are exactly the same or not.
Input: File1: a.txt, File2: b.txt
Output: Files are identical or Files are different
*/
#include<stdio.h>
void Compare_Files(char file1[],char file2[]);
int main()
{
    char file1[100];
    char file2[100];
    printf("Enter first file name:\n");
    scanf("%s",file1);
    printf("Enter second file name:\n");
    scanf("%s",file2);
    Compare_Files(file1,file2);   
    return 0;
}
void Compare_Files(char file1[],char file2[])
{
    FILE *fp1;
    FILE *fp2;
    char ch1;
    char ch2;
    fp1 = fopen(file1,"r");
    fp2 = fopen(file2,"r");
    if(fp1 == NULL || fp2 == NULL)
    {
        printf("File opening failed");
        return;
    }
    do
    {
        ch1 = fgetc(fp1);
        ch2 = fgetc(fp2);
        if(ch1 != ch2)
        {
            printf("Files are different");
            fclose(fp1);
            fclose(fp2);   
            return;
        }
    }while(ch1 != EOF && ch2 != EOF);
    printf("Files are identical");   
    fclose(fp1);
    fclose(fp2);
}