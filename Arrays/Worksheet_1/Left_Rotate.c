
/*
Question: Left rotate array by n
Question description: Write a C program to rotate an array to the left by n positions.
Sample data:
Array: 1 2 3 4 5
Rotate by: 2
Expected output:
Rotated array: 3 4 5 1 2
*/

#include<stdio.h>
int main()
{
    int arr[10], n, pos;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter number of positions to rotate\n");
    scanf("%d", &pos);
    for(int i=0;i<pos;i++)
    {
        int first=arr[0];
        for(int j=0;j<n-1;j++)
        {
            arr[j]=arr[j+1];
        }
        arr[n-1]=first;
    }
    printf("Rotated array: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
