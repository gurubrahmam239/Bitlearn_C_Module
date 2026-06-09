
/*
45. Move all zeros to end of array
Question description:
Write a C program to move all zeros in the array to the end while maintaining the order of non-zero elements.
Sample data:
Input: 1 0 2 0 0 3 4
Expected output:
Output: 1 2 3 4 0 0 0
*/

#include<stdio.h>
int main()
{
    int arr[100],n;
    int index=0;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            arr[index]=arr[i];
            index++;
        }
    }
    while(index<n)
    {
        arr[index]=0;
        index++;
    }
    printf("Output: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
