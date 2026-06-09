/*
4. Program: Find lowest frequency character in a string
          Input: "engineering"

         Output: 'g', 'r', 'n' each appear once

*/
#include<stdio.h>
#include<string.h>
void Lowest_Frequency(char str[])
{
    int freq[256]={0};
    int min=100;
    for(int i=0;str[i]!='\0';i++)
    {
        freq[str[i]]++;
    }
    for(int i=0;str[i]!='\0';i++)
    {
        if(freq[str[i]]<min)
        {
            min=freq[str[i]];
        }
    }
    printf("Characters with lowest frequency:\n");
    for(int i=0;str[i]!='\0';i++)
    {
        int Flag_Printed=0;
        for(int j=0;j<i;j++)
        {
            if(str[i]==str[j])
            {
                Flag_Printed=1;
                break;
            }
        }
        if(freq[str[i]]==min && Flag_Printed==0)
        {
            printf("'%c' appears %d time\n",str[i],min);
        } 
    }
}
int main()
{
    char str[100];
    printf("Enter the string:\n");
    scanf("%s",str);
    Lowest_Frequency(str);
    return 0;
}
