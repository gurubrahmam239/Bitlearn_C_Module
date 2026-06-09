
/*
Question: Count negative elements
Question description: Write a C program to count total number of negative elements in an array.
Sample data:
Input: -1 3 -4 5 0 -7
Expected output:
Total negative elements: 3
*/

#include<stdio.h>
int main()
{
    int arr[10],n,Neg_Count=0;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            Neg_Count++;
        }
    }
    printf("Total Negative Elements:%d",Neg_Count);

}