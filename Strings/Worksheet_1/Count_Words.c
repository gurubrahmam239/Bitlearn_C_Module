
/*
11. Program: Count total number of words in a string
          Input: "C programming is fun"

          Output: 4
*/
#include<stdio.h>
#include<string.h>
int Count_Words(char str[])
{
    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i] == ' ')
        {
            count++;
        }
    }
    return count+1;
}
int main()
{
    char str[100];
    printf("Enter the string:\n");
    fgets(str,101,stdin);
    str[strlen(str)-1]=0;
    int words=Count_Words(str);
    printf("Output: %d",words);
    return 0;
}
