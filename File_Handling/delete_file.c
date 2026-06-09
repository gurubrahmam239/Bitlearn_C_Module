/*
Delete a file from the computer.
Input: File name: temp.txt
Output: File 'temp.txt' deleted.
*/
#include<stdio.h>
void Delete_File(char filename[]);
int main()
{
    char filename[100];
    printf("Enter file name:\n");
    scanf("%s",filename);
    Delete_File(filename);   
    return 0;
}
void Delete_File(char filename[])
{
    int status;
    status=remove(filename);   
    if(status==0)
    {
        printf("File '%s' deleted.",filename);
    }
    else
    {
        printf("Unable to delete file.");
    }
}