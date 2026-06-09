
/*
35. Find equilibrium index
Question description:
Write a C program to find the index where the sum of elements to the left is equal to the sum to the right.
Sample data:
Input: -7 1 5 2 -4 3 0
Expected output:
Equilibrium index is 3
*/
#include<stdio.h>
int main()
{
    int arr[100],n;
    int Total_Sum=0,Left_Sum=0;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        Total_Sum=Total_Sum+arr[i];
    }
    for(int i=0;i<n;i++)
    {
        Total_Sum=Total_Sum-arr[i];
        if(Left_Sum==Total_Sum)
        {
            printf("Equilibrium index is %d",i);
            return 0;
        }
        Left_Sum=Left_Sum+arr[i];
    }
    printf("No equilibrium index found");
    return 0;
}