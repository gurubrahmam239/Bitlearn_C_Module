/*Add more lines to the end of a file without erasing its current content.
Input: File name: lines.txt
Number of new lines: 2
New lines: Line four, Line five
Output: File now contains: Line one, Line two, 
Line three, Line four, Line five
*/
#include<stdio.h>
void Append_Lines(char filename[],int n);
int main()
{
    char filename[100];
    int n;
    printf("Enter file name:\n");
    scanf("%s",filename);
    printf("Enter number of new lines:\n");
    scanf("%d",&n);
    getchar();
    Append_Lines(filename,n);
    printf("Lines appended successfully to '%s'",filename);   
    return 0;
}
void Append_Lines(char filename[],int n)
{
    FILE *fp;
    char line[200];
    fp = fopen(filename,"a");
    if(fp == NULL)
    {
        printf("File opening failed");
        return;
    }
    printf("Enter new lines:\n");
    for(int i=0;i<n;i++)
    {
        fgets(line,sizeof(line),stdin);   
        fputs(line,fp);
    }   
    fclose(fp);
}