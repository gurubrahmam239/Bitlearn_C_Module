/*
Show the last modification date and time of a file.
Input: File name: a.txt
Output: Last modified: Sat Nov 26 17:32:15 2022
*/
#include<stdio.h>
#include<sys/stat.h>
#include<time.h>
void Show_Modification_Time(char filename[]);
int main()
{
    char filename[100];
    printf("Enter file name:\n");
    scanf("%s",filename);
    Show_Modification_Time(filename);   
    return 0;
}
void Show_Modification_Time(char filename[])
{
    struct stat file_info;
    if(stat(filename,&file_info) != 0)
    {
        printf("Unable to get file details");
        
        return;
    }   
    printf("Last modified: %s",
    ctime(&file_info.st_mtime));
}