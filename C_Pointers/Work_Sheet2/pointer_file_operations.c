
/*
Pointer and File I/O
Goal: Use pointers and dynamic memory to efficiently read
 and write data of variable sizes to files.
Activity:
Open a file for reading and writing.
Determine the size of the file or data to read.
Dynamically allocate a buffer to hold file data.
Use pointers to read the data into memory and write data back 
to a file.
Close the file and free allocated memory
*/
#include<stdio.h>
#include<stdlib.h>
void Write_File();
void Read_File();
int main()
{
    Write_File();
    Read_File();
    return 0;
}

void Write_File()
{
    FILE *fp;
    char data[100];
    fp = fopen("sample.txt","w");
    if(fp == NULL)
    {
        printf("File opening failed\n");
        return;
    }
    printf("Enter data to write into file:\n");
    scanf(" %[^\n]",data);
    fprintf(fp,"%s",data);
    fclose(fp);
    printf("Data written successfully\n");
}

void Read_File()
{
    FILE *fp;
    char *buffer;
    long size;
    fp = fopen("sample.txt","r");
    if(fp == NULL)
    {
        printf("File opening failed\n");
        return;
    }
    fseek(fp,0,SEEK_END);
    size = ftell(fp);
    rewind(fp);
    buffer = (char *)malloc((size + 1) * sizeof(char));
    if(buffer == NULL)
    {
        printf("Memory allocation failed\n");
        fclose(fp);
        return;
    }
    fread(buffer,sizeof(char),size,fp);
    *(buffer + size) = 0;
    printf("File contents are:\n");
    printf("%s\n",buffer);
    fclose(fp);
    free(buffer);   
    buffer = NULL;
}
