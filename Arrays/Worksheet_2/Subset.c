
/*
37. Check if array is subset of another
Question description:
Write a C program to check if one array is a subset of another array.
Sample data:
Array 1: 1 2 3 4 5 Array 2: 2 4 5
Expected output:
Array2 is a subset of Array1
*/
#include<stdio.h>
int main()
{
    int arr1[100],arr2[100];
    int n1,n2;
    int Is_Subset=1;
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
    for(int i=0;i<n2;i++)
    {
        int Flag=0;
        for(int j=0;j<n1;j++)
        {
            if(arr2[i]==arr1[j])
            {
                Flag=1;
                break;
            }
        }
        if(Flag==0)
        {
            Is_Subset = 0;
            break;
        }
    }
    if(Is_Subset)
    {
        printf("Array2 is a subset of Array1");
    }
    else
    {
        printf("Array2 is not a subset of Array1");
    }
    return 0;
}
