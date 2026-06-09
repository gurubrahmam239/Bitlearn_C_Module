
/*
39. Find product of all elements
Question description:
Write a C program to find the product of all elements in the array.
Sample data:
Input: 1 2 3 4
Expected output:
Product: 24
*/
#include<stdio.h>
int main()
{
    int arr[100], n;
    int product=1;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        product=product*arr[i];
    }
    printf("Product: %d",product);
    return 0;
}