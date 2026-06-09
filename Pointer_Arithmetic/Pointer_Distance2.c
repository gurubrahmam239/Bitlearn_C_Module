
/*
Question 4: Pointer Comparison
Task: Write code to compare two pointers to 
elements in an array and print which one points 
to the element with a smaller index.
Sample data:
int arr[] = {11, 22, 33, 44, 55};
int *ptr1 = &arr[2];  // points to 33
int *ptr2 = &arr[4];  // points to 55
Expected output:
Pointer ptr1 points to an earlier element than ptr2
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
    distance=p1-p2;   
    printf("Distance between pointers is %d",distance);
}