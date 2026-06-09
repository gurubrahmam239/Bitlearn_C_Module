
/*
Question: Right rotate array by n
Question description: Write a C program to rotate an array to the right by n positions.
Sample data:
Array: 1 2 3 4 5
Rotate by: 2
Expected output:
Rotated array: 4 5 1 2 3
*/
#include<stdio.h>
int main()
{
    int arr[10], n, rotate;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter number of positions to rotate\n");
    scanf("%d",&rotate);
    for(int i=0;i<rotate;i++)
    {
        int last=arr[n-1];
        for(int j=n-1;j>0;j--)
        {
            arr[j]=arr[j-1];
        }
        arr[0]=last;
    }
    printf("Rotated array: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}