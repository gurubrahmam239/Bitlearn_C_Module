
/*
Check if one string is a rotation of another, i.e., one string can be shifted to get the other.
Input: "abcd", "cdab"
Output: Yes
*/

#include<stdio.h>
#include<string.h>
void Check_Rotation(char str1[], char str2[])
{
    int len1=strlen(str1);
    int len2=strlen(str2);
    if(len1!=len2)
    {
        printf("No");
        return;
    }
    char temp[200];
    strcpy(temp, str1);
    strcat(temp, str1);
    if(strstr(temp, str2) != NULL)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}
int main()
{
    char str1[100], str2[100];
    printf("Enter first string:\n");
    scanf("%s",str1);
    printf("Enter second string:\n");
    scanf("%s",str2);
    Check_Rotation(str1, str2);
    return 0;
}