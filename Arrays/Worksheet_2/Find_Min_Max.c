
/*
41. Find the minimum and maximum element using minimum comparisons
Question description:
Write a C program to find minimum and maximum elements using minimum number of comparisons.
Sample data:
Input: 1000 11 445 1 330 3000
Expected output:
Minimum element is 1 Maximum element is 3000
*/
#include<stdio.h>
int main()
{
    int arr[100],n;
    int min,max;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }

        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("Minimum element is %d\n", min);
    printf("Maximum element is %d", max);
    return 0;
}