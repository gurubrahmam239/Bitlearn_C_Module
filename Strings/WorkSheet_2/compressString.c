
/*
Compress a string using run-length encoding by replacing repeated characters with the character and count.
Input: "aaabbcc"
Output: "a3b2c2
*/
#include<stdio.h>
#include<string.h>
void compressString(char str[])
{
    int i = 0, index = 0;
    int len = strlen(str);
    while(i < len)
    {
        char current = str[i];
        int count = 0;
        while(i < len && str[i] == current)
        {
            count++;
            i++;
        }
        str[index++] = current;
        if(count > 1)
        {
            char temp[10];
            sprintf(temp, "%d", count);
            for(int j=0;temp[j]!='\0';j++)
            {
                str[index++]=temp[j];
            }
        }
    }
    str[index]='\0';
}
int main()
{
    char str[100];
    printf("Enter the string:\n");
    scanf("%s", str);
    compressString(str);
    printf("Output: %s", str);
    return 0;
}

