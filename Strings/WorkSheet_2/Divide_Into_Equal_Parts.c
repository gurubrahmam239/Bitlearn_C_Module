
/*
Divide a string into N equal parts and print each part separately.
Input: "abcdefgh", N=4
Output: "ab", "cd", "ef", "gh"
*/
#include<stdio.h>
#include<string.h>
void Divide_String(char str[],int n)
{
    int len=strlen(str);
    if(len%n != 0)
    {
        printf("String cannot be divided into %d equal parts", n);
        return;
    }
    int partSize=len/n;
    printf("Parts of the string are:\n");
    for(int i=0;i<len;i+=partSize)
    {
        for(int j=i;j<i+partSize;j++)
        {
            printf("%c",str[j]);
        }
        printf("\n");
    }
}

int main()
{
    char str[100];
    int n;
    printf("Enter the string:\n");
    scanf("%s", str);
    printf("Enter number of parts:\n");
    scanf("%d", &n);
    Divide_String(str, n);

    return 0;
}
