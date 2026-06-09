
/*
43. Find two elements whose sum is closest to zero
Question description:
Write a C program to find two elements whose sum is closest to zero.
Sample data:
Input: 1 60 -10 70 -80 85
Expected output:
Pair whose sum is closest to zero: -80 85*/
#include<stdio.h>
#include<stdlib.h>
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
    int Min_Sum=abs(arr[0]+arr[1]);
    int num1=arr[0];
    int num2=arr[1];
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int sum=abs(arr[i]+arr[j]);
            if(sum<Min_Sum)
            {
                Min_Sum=sum;
                num1=arr[i];
                num2=arr[j];
            }
        }
    }
    printf("Pair whose sum is closest to zero: %d %d",num1,num2);

    return 0;
}
