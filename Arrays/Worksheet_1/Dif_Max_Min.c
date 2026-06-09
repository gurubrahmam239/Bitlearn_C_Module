
/*
Question: Difference between max and min
Question description: Write a C program to find the difference between largest and smallest elements in an array.
Sample data:
Input: 5 1 9 3 6
Expected output:
Difference: 8
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
    int max = arr[0];
    int min = arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    int difference=max-min;
    printf("Difference: %d",difference);
    return 0;
}

