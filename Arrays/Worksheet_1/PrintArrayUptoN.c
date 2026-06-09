/*
Question: Print elements of an array
Question description: Write a C program to read n elements into an array and display them.
Sample data:
Enter the number of elements: 5
Enter the elements: 10 20 30 40 50
Expected output:
Elements in array are: 10 20 30 40 50 */
#include <stdio.h>
int main()
{
    int arr[10],n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the Elements\n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The elements are:\n");
    for (int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}