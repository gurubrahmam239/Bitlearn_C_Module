
/*
12. Count total zeros and ones in a binary number
Question: Write a C program to count the
 total number of zeros and ones in the
  binary representation of a number.
Sample data: Input: 15 (binary 00001111)
Expected output: Number of ones: 4, 
Number of zeros: 4 (assuming 8-bit)
*/
#include<stdio.h>
void Count_Zeros_Ones(int num);
int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);   
    Count_Zeros_Ones(num);
}
void Count_Zeros_Ones(int num)
{
    int ones=0,zeros=0;
    for(int bit=0;bit<8;bit++)
    {
        if((num>>bit)&1)
        {
            ones++;
        }
        else
        {
            zeros++;
        }
    }   
    printf("Number of ones: %d\n",ones);
    printf("Number of zeros: %d",zeros);
}