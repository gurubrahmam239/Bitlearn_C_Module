
/*
29. Check if array is palindrome
Question description:
Write a C program to check whether an array is palindrome (reads the same forward and backward).
Sample data:
Input: 1 2 3 2 1
Expected output:
The array is a palindrome.
*/
#include<stdio.h>
int main()
{
    int arr[100],n;
    int Flag=1;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int i=0,j=n-1;
    while(i<j)
    {
        if(arr[i]!=arr[j])
        {
            Flag=0;
            break;
        }
        i++;
        j--;
    }
    if(Flag)
    {
        printf("The array is a palindrome.");
    }
    else
    {
        printf("The array is not a palindrome.");
    }
    return 0;
}