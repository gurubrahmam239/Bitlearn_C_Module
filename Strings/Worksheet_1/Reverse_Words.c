
/*
1. Program: Reverse order of words in a given string
          Input: "hello world from C"

         Output: "C from world hello"
*/
#include<stdio.h>
#include<string.h>
void Reverse_String(char str[],int start,int end)
{
    while(start<end)
    {
        char temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
}
void Reverse_Words(char str[])
{
    int len=strlen(str);
    Reverse_String(str,0,len-1);
    int start=0;
    for(int i=0;i<=len;i++)
    {
        if(str[i] ==' '||str[i]=='\0')
        {
            Reverse_String(str,start,i-1);
            start = i + 1;
        }
    }
}
int main()
{
    char str[100];
    printf("Enter the string:\n");
    fgets(str,100,stdin);
    str[strlen(str)-1]=0;
    Reverse_Words(str);
    printf("Output: %s",str);
    return 0;
}