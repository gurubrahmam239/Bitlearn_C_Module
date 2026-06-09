
/*
Question: Segregate even and odd
Question description: Write a C program to arrange all even numbers first and then all odd numbers.
Sample data:
Input: 1 2 3 4 5 6
Expected output:
Even numbers: 2 4 6
Odd numbers: 1 3 5
*/
#include<stdio.h>
int main()
{
    int arr[10],n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]%2!=0 && arr[j]%2==0)
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Even numbers: ");
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d ",arr[i]);
        }
    }
    printf("\nOdd numbers: ");
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}