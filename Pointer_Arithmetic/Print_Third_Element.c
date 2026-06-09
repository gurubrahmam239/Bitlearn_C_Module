
/*
Question 1: Pointer Increment and Access
Task: Log Session an integer array with 5 elements.
 Use a pointer to access and print the third element by 
 incrementing the pointer appropriately.

Sample data:
int arr[] = {5, 10, 15, 20, 25};
Expected output:
Third element is 15
*/
#include<stdio.h>
void Print_Third_Element(int *ptr);
int main()
{
    int arr[100],n;
    printf("Enter the size ofthe array:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }   
    Print_Third_Element(arr);
}
void Print_Third_Element(int *ptr)
{
    ptr=ptr+2;   
    printf("Third element is %d",*ptr);
}