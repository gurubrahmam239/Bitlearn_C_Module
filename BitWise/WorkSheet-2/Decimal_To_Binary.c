
/*
14. Convert decimal to binary using bitwise operator
Question: Write a C program to convert a decimal number to binary representation using bitwise operators.
Sample data: Input: 13
Expected output: Binary representation: 1101
*/
#include<stdio.h>
void Decimal_To_Binary(int num);
int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);   
    Decimal_To_Binary(num);
}
void Decimal_To_Binary(int num)
{
    int bit,start=0;
    printf("Binary representation: ");
    for(bit=31;bit>=0;bit--)
    {
        printf("%d",(num>>bit)&1);
    }
}
