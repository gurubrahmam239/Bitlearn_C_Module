
/*
32. Find the majority element
Question description:
Write a C program to find the majority element in an array (element appearing more than n/2 times).
Sample data:
Input: 2 2 1 2 3 2 2
Expected output:
Majority element: 2
*/
#include<stdio.h>
int main()
{
    int arr[100],n;
    int Flag=-1;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count>n/2)
        {
            Flag=arr[i];
            break;
        }
    }
    if(Flag!=-1)
    {
        printf("Majority element: %d",Flag);
    }
    else
    {
        printf("No majority element found");
    }
    return 0;
}
