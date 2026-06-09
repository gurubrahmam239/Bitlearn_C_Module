
/*

Question: Reverse an array
Question description: Write a C program to reverse an array in-place.
Sample data:
Input: 10 20 30 40 50
Expected output:
Reversed array: 50 40 30 20 10

*/
#include<stdio.h>
int main()
{
    int arr[10],n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(int k=0;k<n;k++)
    {
        scanf("%d",&arr[k]);
    }
    int i=0,j=n-1;
    while(i<j)
    {
        if(arr[i]!=arr[j])
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        i++;
        j--;
    }
    printf("The reversed array is ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}