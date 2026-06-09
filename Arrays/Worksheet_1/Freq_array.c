
/*
Question: Frequency of each element
Question description: Write a C program to count the frequency of each element in an array.
Sample data:
Input: 1 2 2 3 3 3
Expected output:
1 occurs 1 time
2 occurs 2 times
3 occurs 3 times
*/
#include<stdio.h>
int main()
{
    int arr[10],n;
    printf("Enter the size of first array\n");
    scanf("%d",&n);
    printf("Enter the elements of first array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //finding the max element
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    int freq[max+1];//To store the frequency of each element
    for(int i=0;i<=max;i++)//if you dont initialize,it may inc gar value
    {
        freq[i]=0;
    }
    //counting the frequencies
    for(int i=0;i<n;i++)
    {
        freq[arr[i]]++;
    }
    for(int i=0;i<=max;i++)
    {
        if(freq[i]>0)
        {
            printf("%d frequency is:%d\n",i,freq[i]);
        }
    }

}