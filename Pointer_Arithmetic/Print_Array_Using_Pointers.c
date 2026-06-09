
/*
Question 5: Traverse Array with Pointer Arithmetic
Task: Using only a pointer (no array indexing), 
print all elements of the array.
Ex:
int arr[] = {100, 200, 300, 400};
Expected output:
100 200 300 400
*/
#include<stdio.h>
void Print_Array(int *ptr,int n);
int main()
{
    int arr[100],n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }   
    Print_Array(arr,n);
}
void Print_Array(int *ptr,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(ptr+i));
    }
}
