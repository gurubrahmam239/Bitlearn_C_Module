
/*
31. Find missing number in array
Question description:
Write a C program to find the missing number in an array of size n containing numbers from 1 to n+1.
Sample data:
Input: 1 2 4 5 6
Expected output:
Missing number is: 3
*/
#include<stdio.h>
int main()
{
    int arr[100], n;
    int sum=0;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    int total=((n+1)*(n+2))/2;
    int missing=total-sum;
    printf("Missing number is: %d",missing);
    return 0;
}
