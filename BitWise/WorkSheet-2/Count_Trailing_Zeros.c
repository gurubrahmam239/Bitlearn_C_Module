
/*
9. Count trailing zeros in a binary number
Question: Write a C program to count the number of trailing zeros in the binary representation of a number.
Sample data: Input: 40 (binary 101000)
Expected output: Number of trailing zeros: 3
*/
#include<stdio.h>
void Count_Trailing_Zeros(int num);
int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);   
    Count_Trailing_Zeros(num);
}
void Count_Trailing_Zeros(int num)
{
    int count = 0;
    while(((num>>count)&1)==0)
    {
        count++;
    }   
    printf("Number of trailing zeros: %d",count);
}