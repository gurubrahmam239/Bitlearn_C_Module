/*
46. Find the frequency of each element
Question description:
Write a C program to find the frequency of each element in the array.
Sample data:
Input: 10 20 10 30 20 20 10 10
Expected output:
10: 4 20: 3 30: 1
*/

#include<stdio.h>
int main()
{
    int arr[100],n;
    int visited[100];
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        visited[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        if(visited[i]==1)
        {
            continue;
        }
        int count=1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                visited[j]=1;
            }
        }
        printf("%d: %d\n",arr[i],count);
    }
    return 0;
}
