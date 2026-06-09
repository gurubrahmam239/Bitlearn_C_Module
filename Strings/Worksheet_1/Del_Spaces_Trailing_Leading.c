
/*
18. Program: Trim both leading and trailing white space characters from given string
        Input: " Hello World "

        Output: "Hello World"
*/
#include<stdio.h>
#include<string.h>
void Del_Spaces(char str[])
{
    int start=0,end;
    while(str[start]==' ')
    {
        start++;
    }
    int i = 0;
    while(str[start]!='\0')
    {
        str[i++] = str[start++];
    }
    str[i] ='\0';
    end=strlen(str)-1;
    while(end>=0 && str[end]==' ')
    {
        str[end]='\0';
        end--;
    }
}
int main()
{
    char str[100];
    printf("Enter the string:\n");
    fgets(str,100,stdin);
    str[strlen(str)-1]=0;
    Del_Spaces(str);
    printf("Output: \"%s\"",str);
    return 0;
}
