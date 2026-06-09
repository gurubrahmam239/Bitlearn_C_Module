

/*
Question: Count even and odd elements
Question description: Write a C program to count how many even and odd numbers are in the array.
Sample data:
Input: 4 7 9 10 22
Expected output:
Even: 3
Odd: 2
*/
#include<stdio.h>
int main()
{
    int arr[10],n,Even_Count=0,Odd_Count=0;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2 ==0)
        {
            Even_Count++;
        }
        else
        {
            Odd_Count++;
        }
    }
    printf("Even_Count:%d Odd_Count:%d",Even_Count,Odd_Count);
}