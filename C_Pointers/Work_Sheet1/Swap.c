
/*
Swapping Two Numbers Using Pointers
Goal: Understand how to pass variables by reference to functions using pointers.

Activity:

Write a swap function: void swap(int *a, int *b)
In main(), declare two integers and call swap(&x, &y);
Print values before and after swapping.
*/
#include<stdio.h>
void Swap(int *a,int *b);
void Print_Values(int x,int y);
int main()
{
    int x,y;
    printf("Enter two numbers:\n");
    scanf("%d%d",&x,&y);
    printf("Before swapping:\n");
    Print_Values(x,y);
    Swap(&x,&y);
    printf("After swapping:\n");
    Print_Values(x,y);   
    return 0;
}
void Swap(int *a,int *b)
{
    int temp;   
    temp=*a;
    *a=*b;
    *b=temp;
}
void Print_Values(int x,int y)
{
    printf("x = %d\n",x);
    printf("y = %d\n",y);
}
