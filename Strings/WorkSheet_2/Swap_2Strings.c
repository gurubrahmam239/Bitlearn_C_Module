
/*
Swap the contents of two strings without using any extra temporary string variables. The strings' values should be exchanged completely.
Input: str1 = "hello", str2 = "world"
Output: str1 = "world", str2 = "hello"
*/
#include<stdio.h>
#include<string.h>
void Swap_Strings(char str1[],char str2[])
{
    strcat(str1,str2);
    strcpy(str2,str1);
    str2[strlen(str1)-strlen(str2)]='\0';
    strcpy(str1,str1+strlen(str2));
    strcpy(str2,str2);
}
int main()
{
    char str1[100], str2[100];
    printf("Enter first string:\n");
    scanf("%s", str1);
    printf("Enter second string:\n");
    scanf("%s", str2);
    Swap_Strings(str1,str2);
    printf("S1:%s and S2:%s",str1,str2);
    return 0;
}
