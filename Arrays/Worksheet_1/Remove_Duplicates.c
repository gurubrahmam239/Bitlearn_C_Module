
/*
Question: Remove duplicate elements
Question description: Write a C program to remove duplicate elements from an array.
Sample data:
Input: 2 3 2 4 3 5
Expected output:
Array after removing duplicates: 2 3 4 5
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
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                // Shift elements to left
                for(int k=j;k<n-1;k++)
                {
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
    printf("Array after removing duplicates: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
