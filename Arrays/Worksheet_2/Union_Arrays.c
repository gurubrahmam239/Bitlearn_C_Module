/*
26. Find the union of two arrays
Question description:
Write a C program to find the union of two arrays (all unique elements from both arrays).
Sample data:
Array 1: 1 2 3 4 Array 2: 3 4 5 6
Expected output:
Union: 1 2 3 4 5 6
*/
#include<stdio.h>

int main()
{
    int arr1[100],arr2[100],Union_Arr[200];
    int n1,n2,size=0;
    printf("Enter the size of first array\n");
    scanf("%d",&n1);
    printf("Enter the elements of first array:\n");
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the size of second array\n");
    scanf("%d",&n2);
    printf("Enter the elements of second array:\n");
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<n1;i++)
    {
        int found=0;
        for(int j=0;j<size;j++)
        {
            if(arr1[i]==Union_Arr[j])
            {
                found=1;
                break;
            }
        }
        if(found==0)
        {
            Union_Arr[size]=arr1[i];
            size++;
        }
    }
    for(int i=0;i<n2;i++)
    {
        int found=0;
        for(int j=0;j<size;j++)
        {
            if(arr2[i]==Union_Arr[j])
            {
                found=1;
                break;
            }
        }
        if(found==0)
        {
            Union_Arr[size]=arr2[i];
            size++;
        }
    }
    printf("Union: ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",Union_Arr[i]);
    }
    return 0;
}
