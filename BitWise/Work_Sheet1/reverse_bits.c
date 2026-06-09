
/*
Write a program to reverse all bits in an integer.

*/
#include<stdio.h>
unsigned int Reverse_Bits(unsigned int num);
int main()
{
    unsigned int num;
    printf("Enter a number: ");
    scanf("%u",&num);
    printf("Reversed Bits Value = %u\n",Reverse_Bits(num));

    return 0;
}
unsigned int Reverse_Bits(unsigned int num)
{
    unsigned int result = 0;
    int i, j;
    for(i = 31, j = 0; i >= 0; i--, j++)
    {
        if(num & (1U << i))
        {
            result |= (1U << j);
        }
    }
    return result;
}