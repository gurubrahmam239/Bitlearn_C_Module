
/*
15. Swap two numbers using bitwise operator
Question: Write a C program to swap two numbers using bitwise XOR operator without using a temporary variable.
Sample data: Input: a=5, b=9
Expected output: After swapping: a=9, b=5
*/
#include<stdio.h>
void Swap_Numbers(int a,int b);
int main()
{
    int a,b;
    printf("Enter first number:\n");
    scanf("%d",&a);
    printf("Enter second number:\n");
    scanf("%d",&b);   
    Swap_Numbers(a,b);
}
void Swap_Numbers(int a,int b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;   
    printf("After swapping:\n");
    printf("a=%d\n",a);
    printf("b=%d",b);
}