
/*
Write a program to reverse:
Bits at odd positions
Bits at even positions
*/
#include<stdio.h>
unsigned int Reverse_Odd_Bits(unsigned int num);
unsigned int Reverse_Even_Bits(unsigned int num);
int main()
{
    unsigned int num;
    printf("Enter a number: ");
    scanf("%u",&num);
    printf("After Reversing Odd Bits  = %u\n",Reverse_Odd_Bits(num));
    printf("After Reversing Even Bits = %u\n",Reverse_Even_Bits(num));

    return 0;
}
unsigned int Reverse_Odd_Bits(unsigned int num)
{
    unsigned int result = num;
    int i,j;
    for(i = 31, j = 1; i > j; i -= 2, j += 2)
    {
        int bit1 = (num >> i) & 1;
        int bit2 = (num >> j) & 1;
        if(bit1 != bit2)
        {
            result ^= (1U << i);
            result ^= (1U << j);
        }
    }
    return result;
}

unsigned int Reverse_Even_Bits(unsigned int num)
{
    unsigned int result = num;
    int i,j;
    for(i = 30, j = 0; i > j; i -= 2, j += 2)
    {
        int bit1 = (num >> i) & 1;
        int bit2 = (num >> j) & 1;
        if(bit1 != bit2)
        {
            result ^= (1U << i);
            result ^= (1U << j);
        }
    }
    return result;
}