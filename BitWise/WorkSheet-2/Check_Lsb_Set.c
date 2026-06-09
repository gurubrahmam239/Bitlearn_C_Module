
/*
1. Check Least Significant Bit (LSB) of a number is set or not
Question: Write a C program to check if 
the Least Significant Bit (LSB) of a number is set (1) or not.
Sample data: Input: 5 (binary 0101)
Expected output: LSB of 5 is set (1)
*/

#include<stdio.h>
void Check_Lsb_Set( int num);
    
int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    Check_Lsb_Set(num);
    
}
void Check_Lsb_Set(int num)
{
    if((num>>0)&1)
    {
        printf("LSB of 5 is set");
    }
    else
    {
        printf("LSB of 5 is not set");
    }
}
