/*
Find the common folder path among a group of file paths.
Input: /home/user/docs/a.txt, /home/user/docs/b.txt, /home/user/docs/old/c.txt
Output: /home/user/doc
*/
#include<stdio.h>
#include<string.h>
void Find_Common_Path(char paths[][100],int count);
int main()
{
    char paths[3][100] =
    {
        "/home/user/docs/a.txt",
        "/home/user/docs/b.txt",
        "/home/user/docs/old/c.txt"
    };
    Find_Common_Path(paths,3);   
    return 0;
}
void Find_Common_Path(char paths[][100],int count)
{
    char common[100];
    int i,j;
    strcpy(common,paths[0]);
    for(i=1;i<count;i++)
    {
        j = 0;
        while(common[j] && paths[i][j] && common[j] == paths[i][j])
        {
            j++;
        }    
       common[j] = '\0';
    }
    while(strlen(common) > 0 && common[strlen(common)-1] != '/')
    {
        common[strlen(common)-1] = '\0';
    }
    if(strlen(common) > 0)
    {
        common[strlen(common)-1] = '\0';
    }
    printf("Common Path: %s",common);
}