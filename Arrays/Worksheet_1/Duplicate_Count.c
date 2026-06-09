
/*
Question: Count duplicate elements
Question description: Write a C program to count how many duplicate values are in the array.
Sample data:
Input: 1 2 3 1 4 2
Expected output:
Total duplicate elements: 2
*/
#include<stdio.h>
int main()
{
    int arr[10], n;
    int Count = 0,Duplicate_Count=0;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        int IsDuplicate=0;
        for(int k=0;k<i;k++)
        {
            if(arr[i]==arr[k])
            {
                IsDuplicate=1;
                break;
            }
        }
        if(IsDuplicate)
        {
            continue;
        }
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                Duplicate_Count++;
                break;
            }
        }
    }
    printf("Total duplicate elements: %d", Duplicate_Count);
    return 0;
}