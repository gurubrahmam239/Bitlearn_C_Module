/*
Make a new file and save some text entered by the user.
Input: File name: test.txt
Text: Hello, this is my first file!
Output: File 'test.txt' created and saved
*/
#include<stdio.h>
int main()
{
    FILE *fp;
    char filename[100];
    char text[200];
    printf("Enter file name:\n");
    scanf("%s",filename);
    getchar();
    printf("Enter text:\n");
    scanf("%[^\n]",text);
    fp = fopen(filename,"w");
    if(fp == NULL)
    {
        printf("File creation failed");
        return 0;
    }
    fprintf(fp,"%s",text);
    fclose(fp);
    printf("File '%s' created and saved",filename);    
    return 0;
}
