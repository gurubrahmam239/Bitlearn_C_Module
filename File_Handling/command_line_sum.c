/*
Add up numbers given as command line arguments and write the answer into a file.
Input: Arguments: 3 4 5, Output file: sum.txt
Output: sum.txt contains: 12
*/
#include<stdio.h>
#include<stdlib.h>
void Write_Sum_To_File(int argc,char *argv[]);
int main(int argc,char *argv[])
{
    Write_Sum_To_File(argc,argv);   
    return 0;
}
void Write_Sum_To_File(int argc,char *argv[])
{
    FILE *fp;
    int sum = 0;
    fp = fopen("sum.txt","w");
    if(fp == NULL)
    {
        printf("File opening failed");
        return;
    }
    for(int i=1;i<argc;i++)
    {
        sum = sum + atoi(argv[i]);
    }
    fprintf(fp,"%d",sum);
    fclose(fp);   
    printf("sum.txt contains: %d",sum);
}