/*
Merge alternate lines from two files into a third file.
Input: File 1: a.txt (A1, A2)
File 2: b.txt (B1, B2)
New file: merge.txt
Output: merge.txt: A1, B1, A2, B2
*/
#include<stdio.h>
void Merge_Alternate_Lines(char file1[],char file2[],char newfile[]);
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
    Merge_Alternate_Lines(file1,file2,newfile);   
    return 0;
}
void Merge_Alternate_Lines(char file1[],char file2[],char newfile[])
{
    FILE *fp1;
    FILE *fp2;
    FILE *fp3;
    char line1[200];
    char line2[200];
    fp1 = fopen(file1,"r");
    fp2 = fopen(file2,"r");
    fp3 = fopen(newfile,"w");
    if(fp1 == NULL || fp2 == NULL || fp3 == NULL)
    {
        printf("File opening failed");
        return;
    }
    while(fgets(line1,sizeof(line1),fp1) != NULL ||  fgets(line2,sizeof(line2),fp2) != NULL)
    {
        if(!feof(fp1))
        {
            fputs(line1,fp3);
        }   
        if(!feof(fp2))
        {
            fputs(line2,fp3);
        }
    }
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);   
    printf("Alternate lines merged successfully");
}