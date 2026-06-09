
/*
12. Program: Toggle case of each character of a string
         Input: "HeLLo"

         Output: "hEllO"
*/

#include<stdio.h>

void Toggle_Case(char str[])
{
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i]+=32;
        }
        else if(str[i]>=97 && str[i]<=122)
        {
            str[i]-=32;
        }
    }
}
int main()
{
    char str[100];
    printf("Enter the string:\n");
    scanf("%s",str);
    Toggle_Case(str);
    printf("Output: %s",str);
    return 0;
}