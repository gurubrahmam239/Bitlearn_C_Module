
/*
3. Program: Find highest frequency character in a string
          Input: "engineering"
          Output: 'e' appears 3 times
*/
#include<stdio.h>
#include<string.h>
void Highest_Frequency(char str[])
{
    int freq[256]={0};
    int max=0;
    char ch;
    for(int i=0;str[i]!='\0';i++)
    {
        freq[str[i]]++;
    }
    for(int i=0;str[i]!='\0';i++)
    {
        if(freq[str[i]]>max)
        {
            max=freq[str[i]];
            ch=str[i];
        }
    }
    printf("'%c' appears %d times",ch,max);
}
int main()
{
    char str[100];
    printf("Enter the string:\n");
    scanf("%s",str);
    Highest_Frequency(str);
    return 0;
}
