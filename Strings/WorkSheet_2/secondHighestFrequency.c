
/*
Find the character with the second highest frequency in a string.
Input: "aabababa"
Output: 'b'
*/
#include<stdio.h>
#include<string.h>
void secondHighestFrequency(char str[])
{
    int freq[256] = {0};
    for(int i = 0; str[i] != '\0'; i++)
    {
        freq[str[i]]++;
    }
    int first = 0, second = 0;
    char firstChar, secondChar;
    for(int i = 0; i < 256; i++)
    {
        if(freq[i] > first)
        {
            second = first;
            secondChar = firstChar;
            first = freq[i];
            firstChar = i;
        }
        else if(freq[i] > second && freq[i] < first)
        {
            second = freq[i];
            secondChar = i;
        }
    }
    printf("'%c'", secondChar);
}
int main()
{
    char str[100];
    printf("Enter the string:\n");
    scanf("%s", str);
    secondHighestFrequency(str);
    return 0;
}