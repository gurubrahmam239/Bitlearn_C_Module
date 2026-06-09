
/*
Question: Find for an element
Question description: Write a C program to search for a number in an array and print its index.
Sample data:
Array: 10 20 30 40 50
Find: 30
Expected output:
Element found at index: 2
*/

#include<stdio.h>
int main()
{
    int arr[10],n,Index=0,Element=0;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the value of the element to be searched:");
    scanf("%d",&Element);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==Element)
        {
            printf("Element Found at Index:%d\n",i);
                Index++;
                return 0;//To avoid duplicates
        }
    }
    if(Index==0)
    {
        printf("No element found");
    }

}
