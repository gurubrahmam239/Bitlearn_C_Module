
/*
28. Find the difference of two arrays
Question description:
Write a C program to find the difference of two arrays (elements present in first array but not in second).
Sample data:
Array 1: 1 2 3 4 Array 2: 3 4 5 6
Expected output:
Difference (Array1 - Array2): 1 2
*/
#include<stdio.h>
int main()
{
    int arr1[100],arr2[100];
    int n1, n2;
    printf("Enter the size of first array\n");
    scanf("%d",&n1);
    printf("Enter the elements of first array:\n");
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the size of second array\n");
    scanf("%d",&n2);
    printf("Enter the elements of second array:\n");
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    printf("Difference : ");
    for(int i=0;i<n1;i++)
    {
        int found=0;
        for(int j=0;j<n2;j++)
        {
            if(arr1[i]==arr2[j])
            {
                found=1;
                break;
            }
        }
        if(found==0)
        {
            printf("%d ", arr1[i]);
        }
    }
    return 0;
}
