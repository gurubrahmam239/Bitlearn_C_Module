
/*
42. Count occurrences of a number
Question description:
Write a C program to count how many times a specific number appears in an array.
Sample data:
Input array: 1 2 3 2 2 5 Number to count: 2
Expected output:
Number 2 occurs 3 times
*/
#include<stdio.h>
int main()
{
    int arr[100],n,num;
    int count=0;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to count\n");
    scanf("%d",&num);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            count++;
        }
    }
    printf("Number %d occurs %d times",num,count);
    return 0;
}