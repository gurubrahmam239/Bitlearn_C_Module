
/*
34. Find leader elements in array
Question description:
Write a C program to find all leader elements in the array (elements greater than all elements to their right).
Sample data:
Input: 16 17 4 3 5 2
Expected output:
Leader elements: 17 5 2
*/
#include<stdio.h>
int main()
{
    int arr[100],n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Leader elements: ");
    for(int i=0;i<n;i++)
    {
        int Flag=1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<=arr[j])
            {
                Flag=0;
                break;
            }
        }
        if(Flag)
        {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}