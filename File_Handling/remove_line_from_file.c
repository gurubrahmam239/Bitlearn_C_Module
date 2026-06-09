/*
Remove a specific line (by line number) from a file.
Input: File name: lines.txt
Line to remove: 2
Output: File now contains all lines except line 
*/
#include<stdio.h>
void Remove_Line(char filename[],int line_number);
int main()
{
    char filename[100];
    int line_number;
    printf("Enter file name:\n");
    scanf("%s",filename);
    printf("Enter line number to remove:\n");
    scanf("%d",&line_number);
    Remove_Line(filename,line_number);   
    return 0;
}
void Remove_Line(char filename[],int line_number)
{
    FILE *fp1;
    FILE *fp2;
    char line[200];
    int current_line = 1;
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
    while(fgets(line,sizeof(line),fp1) != NULL)
    {
        if(current_line != line_number)
        {
            fputs(line,fp2);
        }   
        current_line++;
    }
    fclose(fp1);
    fclose(fp2);
    remove(filename);
    rename("temp.txt",filename);   
    printf("File now contains all lines except line %d",
    line_number);
}