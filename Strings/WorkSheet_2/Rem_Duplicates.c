
/*
Remove all duplicate characters from a string, keeping only the first occurrence of each character.
Input: "programming"
Output: "progamin"
*/
#include<stdio.h>
#include<string.h>
void Remove_Duplicates(char str[])
{
    int len=strlen(str);
    for(int i=0;i<len;i++)
    {
        for(int j=i+1;j<len;)
        {
            if(str[i]==str[j])
            {
                for(int k=j;k<len;k++)
                {
                    str[k]=str[k+1];
                }
                len--;
            }
            else
            {
                j++;
            }
        }
    }
}
int main()
{
    char str[100];
    printf("Enter the string:\n");
    scanf("%s", str);
    Remove_Duplicates(str);
    printf("Output: %s", str);
    return 0;
}
