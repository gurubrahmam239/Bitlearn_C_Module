
/*
Find the first non-repeating character in a string and print it.
Input: "swiss"
Output: 'w'
*/
#include<stdio.h>
#include<string.h>
void First_Non_Repeating(char str[])
{
    int freq[256] = {0};
    for(int i=0; str[i]!='\0'; i++)
    {
        freq[str[i]]++;
    }
    for(int i=0;str[i]!='\0';i++)
    {
        if(freq[str[i]]==1)
        {
            printf("'%c'",str[i]);
            return;
        }
    }
    printf("No non-repeating character found");
}
int main()
{
    char str[100];
    printf("Enter the string:\n");
    scanf("%s",str);
    First_Non_Repeating(str);
    return 0;
}
