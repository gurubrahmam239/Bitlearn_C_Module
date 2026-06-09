/*
Change a particular line in a file to some new text.
Input: File name: lines.txt
Line number: 3
New text: This line has been changed!
Output: File now contains new text at line 3.
*/
#include<stdio.h>
void Modify_Line(char filename[],int line_number,char new_text[]);
int main()
{
    char filename[100];
    char new_text[200];
    int line_number;
    printf("Enter file name:\n");
    scanf("%s",filename);
    printf("Enter line number:\n");
    scanf("%d",&line_number);
    getchar();
    printf("Enter new text:\n");
    fgets(new_text,sizeof(new_text),stdin);
    Modify_Line(filename,line_number,new_text);   
    return 0;
}
void Modify_Line(char filename[],int line_number,char new_text[])
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
        if(current_line == line_number)
        {
            fputs(new_text,fp2);
        }
        else
        {
            fputs(line,fp2);
        }   
        current_line++;
    }
    fclose(fp1);
    fclose(fp2);
    remove(filename);
    rename("temp.txt",filename);   
    printf("File now contains new text at line %d",
    line_number);
}