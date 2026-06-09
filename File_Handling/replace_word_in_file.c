/*
Replace every use of a chosen word in a file with a different word.
Input: File name: info.txt
Word to replace: file
Replacement: document
Output: Content after: This is a test document.
*/
#include<stdio.h>
#include<string.h>

void Replace_Word(char filename[],char old_word[],char new_word[]);
int main()
{
    char filename[100];
    char old_word[50];
    char new_word[50];
    printf("Enter file name:\n");
    scanf("%s",filename);
    printf("Enter word to replace:\n");
    scanf("%s",old_word);
    printf("Enter replacement word:\n");
    scanf("%s",new_word);
    Replace_Word(filename,old_word,new_word);   
    return 0;
}
void Replace_Word(char filename[],char old_word[],char new_word[])
{
    FILE *fp1;
    FILE *fp2;
    char word[100];
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
    while(fscanf(fp1,"%s",word) != EOF)
    {
        if(strcmp(word,old_word) == 0)
        {
            fprintf(fp2,"%s ",new_word);
        }
        else
        {
            fprintf(fp2,"%s ",word);
        }
    }
    fclose(fp1);
    fclose(fp2);
    remove(filename);
    rename("temp.txt",filename);   
    printf("Word replaced successfully");
}