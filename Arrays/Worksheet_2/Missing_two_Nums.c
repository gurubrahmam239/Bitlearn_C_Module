
/*
 
Question description:
Write a C program to find two missing numbers from an array containing numbers from 1 to n+2.
Sample data:
Input: 1 2 4 6
Expected output:
Missing numbers: 3 5
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
    printf("Missing numbers: ");
    for(int i=1;i<=n+2;i++)
    {
        int Flag=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]==i)
            {
                Flag=1;
                break;
            }
        }
        if(Flag==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
