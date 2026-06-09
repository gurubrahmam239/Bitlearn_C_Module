
/*
Question: Delete element at position
Question description: Write a C program to delete a number at a given position in an array.
Sample data:
Array: 10 20 30 40
Delete at position: 2
Expected output:
Array after deletion: 10 20 40
*/
#include<stdio.h>
int main()
{
    int arr[10], n, pos;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    printf("Enter the array elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position to be deleted: ");
    scanf("%d", &pos);
    // Shift elements to left
    for(int i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    printf("\nThe array after deletion:\n");
    for(int i = 0; i < n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}