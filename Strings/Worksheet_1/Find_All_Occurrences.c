
/*
20. Program: Find all occurrences of a word in given string
        Input: "the sky is the limit in the sky", search "the"
       Output: Found at positions: 0, 15, 30
*/
#include<stdio.h>
#include<string.h>
void Find_All_Occurrences(char str[],char word[])
{
    char *ptr=str;
    int found=0;
    printf("Found at positions: ");
    while((ptr=strstr(ptr,word))!=NULL)
    {
        int position=ptr-str;
        printf("%d ",position);
        ptr=ptr+strlen(word);
        found=1;
    }
    if(found==0)
    {
        printf("Word not found");
    }
}
int main()
{
    char str[200],word[50];
    printf("Enter the string:\n");
    fgets(str,200,stdin);
    printf("Enter the word to search:\n");
    scanf("%s",word);
    str[strlen(str)-1]=0;
    Find_All_Occurrences(str,word);
    return 0;
}