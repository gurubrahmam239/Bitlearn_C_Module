
/*
Write a program to multiply a number by 9 using bitwise shift operations.
*/
#include<stdio.h>
int Multiply_By_9(int num);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Result = %d",Multiply_By_9(num));

    return 0;
}
int Multiply_By_9(int num)
{
    return (num << 3) + num;
}