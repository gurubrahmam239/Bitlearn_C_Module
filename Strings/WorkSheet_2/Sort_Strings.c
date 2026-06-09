
/*
Sort an array of strings in alphabetical order. The sorted array should list strings from A to Z.
Input: {"John", "Alice", "Bob"}
Output: {"Alice", "Bob", "John"}
*/
#include<stdio.h>
#include<string.h>
void Sort_Strings(char str[][50],int n)
{
    char temp[50];
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(strcmp(str[i],str[j])>0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
}
int main()
{
    char str[100][50];
    int n;
    printf("Enter number of strings:\n");
    scanf("%d",&n);
    printf("Enter the strings:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%s",str[i]);
    }
    Sort_Strings(str,n);
    printf("Sorted strings:\n");
    for(int i=0;i<n;i++)
    {
        printf("%s\n",str[i]);
    }
    return 0;
}
