
/*
Passing Array to Function
Goal: Learn how arrays are passed to functions as pointers.
Activity:
Write void display(int *arr, int n);
Inside the function, loop using pointer 
arithmetic to print elements.
*/
#include<stdio.h>
void Display(int *arr,int n);
int main()
{
    int arr[] = {10,20,30,40,50};
    Display(arr,5);   
    return 0;
}
void Display(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(arr + i));
    }
}
