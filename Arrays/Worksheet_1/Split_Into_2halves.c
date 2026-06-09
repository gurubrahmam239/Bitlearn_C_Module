
/*
Question: Split array into halves
Question description: Write a C program to split the array into two halves and print them separately.
Sample data:
Input: 1 2 3 4 5 6
Expected output:
First half: 1 2 3
Second half: 4 5 6
*/

#include<stdio.h>
int main()
{
    int arr[10], n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int mid=n/2;
    printf("First half: ");
    for(int i=0;i<mid;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nSecond half: ");
    for(int i=mid;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}