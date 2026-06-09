/*
Capitalize the first letter of each word in a file.
Input: File name: info.txt (content: hello world!)
Output: Hello World!
*/
#include<stdio.h>
#include<ctype.h>
void Capitalize_Words(char filename[]);
int main()
{
    char filename[100];
    printf("Enter file name:\n");
    scanf("%s",filename);
    Capitalize_Words(filename);   
    return 0;
}
void Capitalize_Words(char filename[])
{
    FILE *fp1;
    FILE *fp2;
    char ch;
    int new_word = 1;
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
        if(new_word && isalpha(ch))
        {
            ch = toupper(ch);   
            new_word = 0;
        }
        if(ch == ' ' || ch == '\n' || ch == '\t')
        {
            new_word = 1;
        }   
        fputc(ch,fp2);
    }
    fclose(fp1);
    fclose(fp2);
    remove(filename);
    rename("temp.txt",filename);   
    printf("First letter of each word capitalized");
}