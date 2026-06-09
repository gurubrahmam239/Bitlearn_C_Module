
/*
3. Get nth bit of a number
Question: Write a C program to get the value of the nth bit of a number.
Sample data: Input number: 10 (binary 1010), bit position: 2
Expected output: Bit 2 of 10 is 1
*/
#include<stdio.h>
void Get_Nth_Bit(int num,int pos);
int main()
{
    int num,pos;
    printf("Enter the number:\n");
    scanf("%d",&num);
    printf("Enter the bit position:\n");
    scanf("%d",&pos);
    Get_Nth_Bit(num,pos);    
}
void Get_Nth_Bit(int num,int pos)
{
    if((num>>pos)&1)
    {
        printf("Bit %d of %d is 1",pos,num);
    }
    else
    {
        printf("Bit %d of %d is 0",pos,num);
    }
}
