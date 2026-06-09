
/*
8. Program: Count frequency of each character in a string
         Input: "success"

         Output:
          s = 3
         u = 1
         c = 2
         e = 1
*/
#include<stdio.h>
void Count_Frequency(char str[])
{
    int freq[256]={0};
    for(int i=0;str[i]!='\0';i++)
    {
        freq[str[i]]++;
    }
    for(int i=0;str[i]!='\0';i++)
    {
        int Printed_Flag=0;
        for(int j=0;j<i;j++)
        {
            if(str[i]==str[j])
            {
                Printed_Flag=1;
                break;
            }
        }
        if(Printed_Flag==0)
        {
            printf("%c = %d\n",str[i],freq[str[i]]);
        }
    }
}
int main()
{
    char str[100];
    printf("Enter the string:\n");
    scanf("%s",str);
    Count_Frequency(str);
    return 0;
}
