
/*
Given two integers A and B, write a program to count the number of bits that need to
 be flipped to convert A into B.
*/
#include<stdio.h>
int Count_Bit_Flips(int a,int b);
int main()
{
    int a,b;
    printf("Enter A: ");
    scanf("%d",&a);
    printf("Enter B: ");
    scanf("%d",&b);
    printf("Bits to be flipped = %d",Count_Bit_Flips(a,b));
    return 0;
}

int Count_Bit_Flips(int a,int b)
{
    int xor_result;
    int count = 0;
    xor_result = a ^ b;
    while(xor_result)
    {
        count++;
        xor_result =xor_result&(xor_result-1);
    }   
    return count;
}