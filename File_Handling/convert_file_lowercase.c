/*
Change all the letters in a file to lowercase.
Input: File name: info.txt (content: Hello World!)
Output: hello world!
*/
#include<stdio.h>
#include<ctype.h>
void Convert_To_Lowercase(char filename[]);
int main()
{
    char filename[100];
    printf("Enter file name:\n");
    scanf("%s",filename);
    Convert_To_Lowercase(filename);   
    return 0;
}
void Convert_To_Lowercase(char filename[])
{
    FILE *fp1;
    FILE *fp2;
    char ch;
    fp1 = fopen(filename,"r");
    if(fp1 == NULL)
    {
        printf("File opening failed");
        return;
    }
    fp2 = fopen("temp.txt","w");
    if(fp2 == NULL)
    {
        printf("Temporary file creation failed");
        fclose(fp1);   
        return;
    }
    while((ch = fgetc(fp1)) != EOF)
    {
        fputc(tolower(ch),fp2);
    }
    fclose(fp1);
    fclose(fp2);
    remove(filename);
    rename("temp.txt",filename);   
    printf("All letters converted to lowercase");
}