
/*
Question: Count prime numbers
Question description: Write a C program to count and display all prime numbers in an array.
Sample data:
Input: 2 4 5 6 7 8
Expected output:
Primes: 2 5 7
Count: 3
*/
#include<stdio.h>
int main()
{
    int arr[10], n;
    int Count_Prime=0;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Primes: ");
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=1;j<=arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            printf("%d ",arr[i]);
            Count_Prime++;
        }
    }
    printf("\nCount: %d",Count_Prime);
    return 0;
}
