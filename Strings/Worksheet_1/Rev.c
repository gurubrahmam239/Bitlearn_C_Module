
/*
5. Program: Reverse a string without using library functions
         Input: "OpenAI"

         Output: "IAnepO"
*/
#include<stdio.h>
void Reverse_String(char str[])
{
    int len=0;
    while(str[len]!='\0')
    {
        len++;
    }
    int start=0;
    int end=len-1;
    while(start<end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
int main()
{
    char str[100];
    printf("Enter the string:\n");
    scanf("%s",str);
    Reverse_String(str);
    printf("Output: %s",str);
    return 0;
}