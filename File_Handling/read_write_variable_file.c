/*
Read a value from a file into a variable, and also write a variable’s value back into a file.
Input: File name: number.txt (contains: 42)
Output: Read variable: 42; After writing value 100, file now contains: 100
*/
#include<stdio.h>
void Read_Value(char filename[]);
void Write_Value(char filename[],int value);
int main()
{
    char filename[100];
    printf("Enter file name:\n");
    scanf("%s",filename);
    Read_Value(filename);
    Write_Value(filename,100);   
    return 0;
}
void Read_Value(char filename[])
{
    FILE *fp;
    int number;
    fp = fopen(filename,"r");
    if(fp == NULL)
    {
        printf("File opening failed\n");
        return;
    }
    fscanf(fp,"%d",&number);
    fclose(fp);   
    printf("Read variable: %d\n",number);
}
void Write_Value(char filename[],int value)
{
    FILE *fp;
    fp = fopen(filename,"w");
    if(fp == NULL)
    {
        printf("File opening failed\n");
        return;
    }
    fprintf(fp,"%d",value);
    fclose(fp);
    printf("After writing value %d, file now contains: %d",value,value);
}