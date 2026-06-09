
/*
Reverse the order of words in a sentence without reversing the words themselves.
Input: "Hello world"
Output: "world Hello"
*/
#include<stdio.h>
#include<string.h>
void Reverse_Words(char str[])
{
    char *words[100];
    int count = 0;
    char *token = strtok(str, " ");
    while(token != NULL)
    {
        words[count] = token;
        count++;
        token = strtok(NULL, " ");
    }
    for(int i=count-1;i>=0;i--)
    {
        printf("%s ",words[i]);
    }
}
int main()
{
    char str[200];
    printf("Enter the sentence:\n");
    fgets(str,200,stdin);
    str[strlen(str)-1] = 0;
    printf("Output: ");
    Reverse_Words(str);
    return 0;
}
