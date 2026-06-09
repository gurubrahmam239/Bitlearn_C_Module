
/*
27. Find the intersection of two arrays
Question description:
Write a C program to find the intersection of two arrays (common elements).
Sample data:
Array 1: 1 2 3 4 Array 2: 3 4 5 6
Expected output:
Intersection: 3 4
*/
#include<stdio.h>
int main()
{
    int arr1[100], arr2[100], inter[100];
    int n1,n2,size=0;
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
    // Finding common elements
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(arr1[i]==arr2[j])
            {
                int found = 0;
                // Avoiding duplicate vlaues
                for(int k=0;k<size;k++)
                {
                    if(inter[k]==arr1[i])
                    {
                        found=1;
                        break;
                    }
                }
                if(found==0)
                {
                    inter[size]=arr1[i];
                    size++;
                }
            }
        }
    }
    printf("Intersection: ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",inter[i]);
    }
    return 0;
}
