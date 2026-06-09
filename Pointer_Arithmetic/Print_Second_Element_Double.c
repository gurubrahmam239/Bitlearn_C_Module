
/*
Question 7: Pointer Arithmetic with Different Data Types
Task: Log Session a double array and use pointer 
arithmetic to print the second element.Explain how pointer
arithmetic differs for double compared to int.
Sample data:
double darr[] = {1.1, 2.2, 3.3};
Expected output:
Second element is 2.2
*/
#include<stdio.h>
void Print_Second_Element(double *ptr);
int main()
{
    double darr[100];
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%lf",&darr[i]);
    }   
    Print_Second_Element(darr);
}
void Print_Second_Element(double *ptr)
{
    ptr = ptr + 1;   
    printf("Second element is %.1lf",*ptr);
}