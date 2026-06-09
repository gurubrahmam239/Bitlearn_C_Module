
/*
10. Count leading zeros in a binary number
Question: Write a C program to count the number of 
leading zeros in the binary representation of a number 
(assuming 32-bit integer).
Sample data: Input: 16 (binary 00000000000000000000000000010000)
Expected output: Number of leading zeros: 27
*/
#include<stdio.h>
void Count_Leading_Zeros(int num);
int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);   
    Count_Leading_Zeros(num);
}
void Count_Leading_Zeros(int num)
{
    int count=0;
    for(int bit=31;bit>= 0;bit--)
    {
        if((num>>bit)&1)
        {
            break;
        }   
        count++;
    }   
    printf("Number of leading zeros: %d",count);
}
