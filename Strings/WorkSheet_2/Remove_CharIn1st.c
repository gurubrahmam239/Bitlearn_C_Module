
/*
Remove from the first string all characters that appear in the second string.
Input: str1 = "hello world", str2 = "low"
Output: "he rd"
*/
#include<stdio.h>
#include<string.h>
void Remove_Characters(char str1[],char str2[])
{
    int i,j,found;
    char result[100];
    int index=0;
    for(i = 0;str1[i]!='\0';i++)
    {
        found=0;
        for(j=0;str2[j]!='\0';j++)
        {
            if(str1[i]==str2[j])
            {
                found=1;
                break;
            }
        }
        if(found==0)
        {
            result[index]=str1[i];
            index++;
        }
    }
    result[index]='\0';
    strcpy(str1,result);
}

int main()
{
    char str1[100],str2[100];
    printf("Enter first string:\n");
    fgets(str1,100,stdin);
    printf("Enter second string:\n");
    fgets(str2,100,stdin);
    str1[strlen(str1)-1]=0;
    str2[strlen(str2)-1]=0;
    Remove_Characters(str1,str2);
    printf("Output: \"%s\"",str1);
    return 0;
}
