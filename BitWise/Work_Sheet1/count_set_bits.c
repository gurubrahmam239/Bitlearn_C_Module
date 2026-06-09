
/*
Write a C program to count the number of set bits in an unsigned integer.
*/
#include<stdio.h>
int Count_Set_Bits(unsigned int num);
int main()
{
    unsigned int num;
    printf("Enter a number: ");
    scanf("%u",&num);
    printf("Number of set bits = %d",Count_Set_Bits(num));
    return 0;
}

int Count_Set_Bits(unsigned int num)
{
    int count=0;
    while(num!=0)
    {
        if(num&1)
        {
            count++;
        }   
        num=num>>1;
    }   
    return count;
}