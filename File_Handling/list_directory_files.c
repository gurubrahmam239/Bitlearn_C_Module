/*
List all the files found inside a directory (folder).
Input: Directory: myfolder/
Output: file1.txt, file2.txt, notes.doc
*/
#include<stdio.h>
#include<dirent.h>
void List_Files(char dirname[]);
int main()
{
    char dirname[100];
    printf("Enter directory name:\n");
    scanf("%s",dirname);
    List_Files(dirname);   
    return 0;
}
void List_Files(char dirname[])
{
    DIR *dir;
    struct dirent *entry;
    dir = opendir(dirname)
    if(dir == NULL)
    {
        printf("Directory opening failed");
        return;
    }
    printf("Files in directory:\n");
    while((entry = readdir(dir)) != NULL)
    {
        printf("%s\n",entry->d_name);
    }   
    closedir(dir);
}