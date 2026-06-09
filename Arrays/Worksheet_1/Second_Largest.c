
/*
Question: Find second largest element
Question description: Write a C program to find the second largest number in the array.
Sample data:
Input: 10 20 50 40
Expected output:
Second largest: 40
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
    int largest,Second_Largest;
    largest=Second_Largest=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            Second_Largest=largest;
            largest=arr[i];
        }
        else if(arr[i]>Second_Largest&&arr[i]!=largest)
        {
            Second_Largest=arr[i];
        }
    }
    printf("Second largest: %d",Second_Largest);
    return 0;
}