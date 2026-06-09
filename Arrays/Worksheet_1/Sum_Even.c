
/*
Question description: Write a C program to find the sum of all even numbers in an array.
Sample data:
Input: 2 3 4 5 6
Expected output:
Sum of even numbers: 12
*/
#include<stdio.h>
int main()
{
    int arr[10],n;
    int sum=0;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            sum=sum+arr[i];
        }
    }
    printf("Sum of even numbers: %d", sum);
    return 0;
}
