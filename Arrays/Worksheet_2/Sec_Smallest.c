

/*
36. Find second smallest element
Question description:
Write a C program to find the second smallest element in the array.
Sample data:
Input: 12 13 1 10 34 1
Expected output:
Second smallest element is 10
*/
#include<stdio.h>
int main()
{
    int arr[100], n;
    int Smallest;
    int Second_Smallest;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   // Smallest=arr[0];
    //Second_Smallest=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<Smallest)
        {
            Second_Smallest=Smallest;
            Smallest=arr[i];
        }
        else if(arr[i]<Second_Smallest&&arr[i]!=Smallest)
        {
            Second_Smallest=arr[i];
        }
    }
    printf("Second smallest element is %d",Second_Smallest);
    return 0;
}