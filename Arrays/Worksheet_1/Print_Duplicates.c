
/*
Question: Find duplicate elements
Question description: Write a C program to find all duplicate elements in an array.
Sample data:
Input: 1 2 3 2 4 1
Expected output:
Duplicate elements: 1 2
*/
#include<stdio.h>
int main()
{
    int arr[10], n;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Duplicate elements: ");
    for(int i=0;i<n;i++)
    {
        int count = 0;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count=1;
                break;
            }
        }
        int Printed = 0;
        for(int k=0;k<i;k++)
        {
            if(arr[i]==arr[k])
            {
                Printed = 1;
                break;
            }
        }
        if(count==1&&Printed==0)
        {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}