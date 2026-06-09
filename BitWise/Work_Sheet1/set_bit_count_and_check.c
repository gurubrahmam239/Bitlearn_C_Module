
/*
Write a C program to count the number of bits set to 1 in an integer. 
Also compare different methods. Additionally, check if the 20th bit of a 32-bit integer is set.
*/
#include<stdio.h>
int Count_Set_Bits_Method1(unsigned int num);
int Count_Set_Bits_Method2(unsigned int num);
void Check_20th_Bit(unsigned int num);
int main()
{
    unsigned int num;
    printf("Enter a number: ");
    scanf("%u",&num);
    printf("Set Bits (Method 1) = %d\n",Count_Set_Bits_Method1(num));
    printf("Set Bits (Method 2) = %d\n",Count_Set_Bits_Method2(num));
    Check_20th_Bit(num);
    return 0;
}

int Count_Set_Bits_Method1(unsigned int num)
{
    int count = 0;
    while(num)
    {
        count += (num & 1);   
        num = num >> 1;
    }
    return count;
}

int Count_Set_Bits_Method2(unsigned int num)
{
    int count = 0;
    while(num)
    {
        num = num & (num - 1);   
        count++;
    }   
    return count;
}
void Check_20th_Bit(unsigned int num)
{
    if(num & (1 << 20))
    {
        printf("20th bit is SET\n");
    }
    else
    {
        printf("20th bit is NOT SET\n");
    }
}