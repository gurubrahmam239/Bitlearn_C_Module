
/*
Question: Sort array in descending order
Question description: Write a C program to sort array elements in descending order.
Sample data:
Input: 7 2 9 4
Expected output:
Sorted array: 9 7 4 2
*/
#include<stdio.h>
int main()
{
    int arr[10], n;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int temp;
    for(int i=n-1;i>=1;i--)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Sorted array in des: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
