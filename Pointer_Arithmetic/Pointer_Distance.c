
/*
Question 3: Pointer Subtraction
Task: Given two pointers pointing to elements of an 
integer array, find the distance (number of elements)
between them.
Sample data:
int arr[] = {2, 4, 6, 8, 10};
int *p1 = &arr[4];  // points to 10
int *p2 = &arr[1];  // points to 4
Expected output:
Distance between pointers is 3
*/
#include<stdio.h>
void Pointer_Distance(int *p1,int *p2);
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
    int pos1,pos2;
    printf("Enter first pointer position:");
    scanf("%d",&pos1);
    printf("Enter second pointer position:");
    scanf("%d",&pos2);   
    Pointer_Distance(&arr[pos1],&arr[pos2]);
}
void Pointer_Distance(int *p1,int *p2)
{
    int distance;
    distance = p1 - p2;   
    printf("Distance between pointers is %d",distance);
}