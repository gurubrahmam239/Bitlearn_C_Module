
/*
Question: Copy array elements
Question description: Write a C program to copy all elements from one array to another.
Sample data:
Input: 1 2 3 4 5
Expected output:
Copied array: 1 2 3 4 5
*/

#include<stdio.h>
int main()
{
    int arr1[10],arr2[10],n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<n;i++)
    {
        arr2[i]=arr1[i];
    }
    printf("The elements of arr1:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\n");
     printf("The elements of arr2 which i copied:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr2[i]);
    }
    printf("\n");
}