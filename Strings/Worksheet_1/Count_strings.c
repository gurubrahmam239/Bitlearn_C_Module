
/*
15. Program: Count occurrences of a word in a given string
          Input: "hi hello hi hey hi", word: "hi"
         Output: 3
*/
#include<stdio.h>
#include<string.h>
int Count_Word(char str[],char word[])
{
    int count=0;
    char *ptr=str;
    while((ptr=strstr(ptr,word))!=NULL)
    {
        count++;
        ptr=ptr+strlen(wor);
    }
    return count;
}
int main()
{
    char str[200], word[50];
    printf("Enter the string:\n");
    fgets(str,200,stdin);
    str[strlen(str)-1]=0;
    printf("Enter the word:\n");
    fgets(word,50,stdin);
    word[strlen(word)-1]=0;
    int result=Count_Word(str, word);
    printf("Output: %d",result);
    return 0;
}