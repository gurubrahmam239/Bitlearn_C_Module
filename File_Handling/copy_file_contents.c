/*
Copy everything from one file and save it into another file.
Input: Source file: lines.txt
Destination file: copy.txt
Output: File 'lines.txt' copied to 'copy.txt'.
*/
#include<stdio.h>
void Copy_File(char source[],char destination[]);
int main()
{
    char source[100];
    char destination[100];
    printf("Enter source file name:\n");
    scanf("%s",source);
    printf("Enter destination file name:\n");
    scanf("%s",destination);
    Copy_File(source,destination);   
    return 0;
}
void Copy_File(char source[],char destination[])
{
    FILE *fs;
    FILE *fd;
    char ch;
    fs = fopen(source,"r");
    if(fs == NULL)
    {
        printf("Source file opening failed");
        return;
    }
    fd = fopen(destination,"w");
    if(fd == NULL)
    {
        printf("Destination file creation failed");
        fclose(fs);   
        return;
    }
    while((ch = fgetc(fs)) != EOF)
    {
        fputc(ch,fd);
    }
    fclose(fs);
    fclose(fd);
    printf("File '%s' copied to '%s'.",source,destination);
}