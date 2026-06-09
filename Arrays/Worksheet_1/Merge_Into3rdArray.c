
/*
Question: Merge two arrays
Question description: Write a C program to merge two arrays into a third array.
Sample data:
Array 1: 1 2 3
Array 2: 4 5 6
Expected output:
Merged array: 1 2 3 4 5 6
*/
//Merge_Into3rdArray.c
#include<stdio.h>

int main()
{
    int arr1[10], arr2[10], arr3[20];
    int n1, n2;
    printf("Enter the size of first array\n");
    scanf("%d",&n1);
    printf("Enter the elements of first array:\n");
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the size of second array\n");
    scanf("%d",&n2);
    printf("Enter the elements of second array:\n");
    for(int i=0; i<n2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<n1;i++)
    {
        arr3[i]=arr1[i];
    }
    for(int i=0;i<n2;i++)
    {
        arr3[n1 + i]=arr2[i];
    }
    printf("Merged array: ");
    for(int i=0;i<n1+n2;i++)
    {
        printf("%d ",arr3[i]);
    }
    return 0;
}
