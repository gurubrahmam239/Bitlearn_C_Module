
/*
Print the reverse of a string using recursion.
Input: "hello"
Output: "olleh"
*/
#include<stdio.h>
#include<string.h>
void Reverse_String(char str[],int index)
{
    if(index<0)
    {
        return;
    }
    printf("%c",str[index]);
    Reverse_String(str,index-1);
}
int main()
{
    char str[100];
    printf("Enter the string:\n");
    scanf("%s",str);
    int len=strlen(str);
    printf("Output: ");
    Reverse_String(str,len-1);
    return 0;
}
