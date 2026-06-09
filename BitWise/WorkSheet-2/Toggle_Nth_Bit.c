
/*
6. Toggle nth bit of a number
Question: Write a C program to toggle (flip) the nth bit of a number.
Sample data: Input number: 10 (binary 1010), bit position: 1
Expected output: Number after toggling bit 1: 8 (binary 1000)
*/
#include<stdio.h>
void Toggle_Nth_Bit(int num,int pos);
int main()
{
    int num,pos;
    printf("Enter the number:\n");
    scanf("%d",&num);
    printf("Enter the bit position:\n");
    scanf("%d",&pos);    
    Toggle_Nth_Bit(num,pos);   
}
void Toggle_Nth_Bit(int num,int pos)
{
    num=num^(1<<pos);   
    printf("Number after toggling bit %d: %d",pos,num);
}