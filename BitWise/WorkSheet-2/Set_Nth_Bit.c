
/*
4. Set nth bit of a number
Question: Write a C program to set (make 1) the nth bit of a number.
Sample data: Input number: 10 (binary 1010), bit position: 1
Expected output: Number after setting bit 1: 10 (binary 1010) — no change
Input number: 8 (binary 1000), bit position: 0
Expected output: Number after setting bit 0: 9 (binary 1001)
*/
#include<stdio.h>
void Set_Nth_Bit( int num,int pos);
int main()
{
    int num,pos;
    printf("Enter the number:\n");
    scanf("%d",&num);
    printf("Enter the bit position:\n");
    scanf("%d",&pos);
    Set_Nth_Bit(num,pos);
}
void Set_Nth_Bit(int num,int pos)
{
    num = num|(1<<pos);    
    printf("Number after setting bit %d: %d",pos,num);
}
