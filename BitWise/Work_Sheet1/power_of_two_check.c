
/*
Write a C program to check whether a number is a power of 2 using bitwise operations.
*/
#include<stdio.h>
int Is_Power_Of_Two(unsigned int num);
int main()
{
    unsigned int num;
    printf("Enter a number: ");
    scanf("%u",&num);
    if(Is_Power_Of_Two(num))
    {
        printf("%u is a Power of 2",num);
    }
    else
    {
        printf("%u is NOT a Power of 2",num);
    }   
    return 0;
}
int Is_Power_Of_Two(unsigned int num)
{
    if(num==0)
    {
        return 0;
    }
    return ((num&(num-1))==0);
}