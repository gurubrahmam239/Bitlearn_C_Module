
/*
10. Program: Remove all occurrence of a word in given string
           Input: "hello world hello universe", remove: "hello"
          Output: "world universe"
*/
#include<stdio.h>
#include<string.h>
void Remove_Word(char str[], char word[])
{
    int Len=strlen(word);
    char *pos;
    while((pos=strstr(str,word))!=NULL)
    {
        memmove(pos,pos+Len,strlen(pos+Len)+1);
    }
}
int main()
{
    char str[200],word[50];
    printf("Enter the string:\n");
    fgets(str,sizeof(str),stdin);
    printf("Enter the word to remove:\n");
    scanf("%s",word);
    str[strlen(str)-1]=0;
    Remove_Word(str, word);
    printf("Output: \"%s\"", str);
    return 0;
}
