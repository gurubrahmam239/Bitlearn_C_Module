
/*
Question: Insert element at position
Question description: Write a C program to insert a number at a given position in an array.
Sample data:
Array: 10 20 30 40
Insert: 25 at position 2
Expected output:
Array after insertion: 10 20 25 30 40
*/
#include<stdio.h>
int main()
{
    int arr[10],n,Value,Index;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the Index");
    scanf("%d",&Index);
    printf("\nEnter the value");
    scanf("%d",&Value);
    for(int i = n; i > Index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[Index]=Value;
    n++;
    printf("The array elements after Inserting are:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

}