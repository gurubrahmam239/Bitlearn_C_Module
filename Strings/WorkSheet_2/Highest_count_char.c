
/*
Find the character that appears most frequently in the input string and print it.
Input: "sample string"
Output: 's'
*/
#include<stdio.h>
#include<string.h>
void Highest_Frequency(char str[])
{
    int freq[256]={0};
    int max=0;
    char ch;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
            freq[str[i]]++;
        }
    }
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' '  && freq[str[i]]>max)
        {
            max=freq[str[i]];
            ch=str[i];
        }
    }
    printf("'%c'",ch);
}
int main()
{
    char str[100];
    printf("Enter the string:\n");
    fgets(str,100,stdin);
    str[strlen(str)-1]=0;
    Highest_Frequency(str);
    return 0;
}