
/*
Write a C program to determine whether a number is odd or even using bitwise operators.
*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num&1)
    {
        printf("%d is Odd",num);
    }
    else
    {
        printf("%d is Even",num);
    }   
    return 0;
}