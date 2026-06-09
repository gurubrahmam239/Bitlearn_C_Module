
/*
Write a program to check bit status in an integer:
Check if LSB is set (1) or not (0)
Check if MSB is set (1) or not (0)
Check if the nth bit is set (1) or not (0) (user input)
*/
#include<stdio.h>
int Check_LSB(unsigned int num);
int Check_MSB(unsigned int num);
int Check_Nth_Bit(unsigned int num,int n);
int main()
{
    unsigned int num;
    int n;
    printf("Enter a number: ");
    scanf("%u",&num);
    printf("Enter bit position: ");
    scanf("%d",&n);
    printf("LSB Status = %d\n",Check_LSB(num));
    printf("MSB Status = %d\n",Check_MSB(num));
    printf("%d Bit Status = %d\n",n,Check_Nth_Bit(num,n));
    return 0;
}
int Check_LSB(unsigned int num)
{
    return (num & 1);
}
int Check_MSB(unsigned int num)
{
    return ((num >> 31) & 1);
}
int Check_Nth_Bit(unsigned int num,int n)
{
    return ((num >> n) & 1);
}