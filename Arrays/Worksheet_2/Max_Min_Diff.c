
/*
40. Find the maximum difference between two elements such that larger element appears after the smaller
Question description:
Write a C program to find the maximum difference between two elements in an array such that the larger element appears after the smaller element.
Sample data:
Input: 2 3 10 6 4 8 1
Expected output:
Maximum difference: 8 (10 - 2)*/
#include<stdio.h>
int main()
{
    int arr[100],n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int minElement=arr[0];
    int maxDifference = arr[1]-arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]-minElement>maxDifference)
        {
            maxDifference=arr[i]-minElement;
        }
        if(arr[i]<minElement)
        {
            minElement=arr[i];
        }
    }
    printf("Maximum difference: %d", maxDifference);
    return 0;
}
