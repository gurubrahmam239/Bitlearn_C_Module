
/*
5. Clear nth bit of a number
Question: Write a C program to clear (make 0) the nth bit of a number.
Sample data: Input number: 10 (binary 1010), bit position: 3
Expected output: Number after clearing bit 3: 2 (binary 0010)
*/
#include<stdio.h>
void Clear_Nth_Bit(int num,int pos);
int main()
{
    int num,pos;
    printf("Enter the number:\n");
    scanf("%d",&num);
    printf("Enter the bit position:\n");
    scanf("%d",&pos);
    Clear_Nth_Bit(num,pos);
}
void Clear_Nth_Bit(int num,int pos)
{
    num=num&~(1<<pos);   
    printf("Number after clearing bit %d: %d",pos,num);
}