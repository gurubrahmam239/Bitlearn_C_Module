
/*
Question 2: Pointer Addition
Task: Using the same array, 
print the last element by adding an integer to the pointer.
Sample data:
int arr[] = {5, 10, 15, 20, 25};
Expected output:
Last element is 25
*/
#include<stdio.h>
void Print_Last_Element(int *ptr,int n);
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
    Print_Last_Element(arr,n);
}

void Print_Last_Element(int *ptr,int n)
{
    ptr=ptr+(n-1);      
    printf("Last element is %d",*ptr);
}