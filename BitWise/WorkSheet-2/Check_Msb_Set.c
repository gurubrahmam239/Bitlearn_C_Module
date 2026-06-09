
/*
2. Check Most Significant Bit (MSB) of a number is set or not
Question: Write a C program to check if the Most Significant Bit (MSB) of a number is set (1) or not.
Sample data: Input: 128 (binary 10000000 for 8-bit number)
Expected output: MSB of 128 is set (1)
*/
#include<stdio.h>
void Check_Msb_Set( int num);  
int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    Check_Msb_Set(num);
    
}
void Check_Msb_Set(int num)
{
    if((num>>7)&1)
    {
        printf("MSB of %d is set",num);
    }
    else
    {
        printf("MSB of %d is not set",num);
    }
}

