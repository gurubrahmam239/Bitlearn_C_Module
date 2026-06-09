
/*
Write a program to modify specific portions of a given integer:
Set all bits in the Least Significant Byte (LSB) to 1
Set all bits in the Most Significant Byte (MSB) to 1
Set all bits in the Least Significant Nibble to 1
Set all bits in the Most Significant Nibble to 1
Set n bits to 1 (user input)
Clear n bits (set to 0), with n as input
Toggle n bits (user input)
*/
#include<stdio.h>
unsigned int Set_LSB_Byte(unsigned int num);
unsigned int Set_MSB_Byte(unsigned int num);
unsigned int Set_LSB_Nibble(unsigned int num);
unsigned int Set_MSB_Nibble(unsigned int num);
unsigned int Set_N_Bits(unsigned int num,int n);
unsigned int Clear_N_Bits(unsigned int num,int n);
unsigned int Toggle_N_Bits(unsigned int num,int n);
int main()
{
    unsigned int num;
    int n;
    printf("Enter a number: ");
    scanf("%u",&num);
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Set LSB Byte = %u\n",Set_LSB_Byte(num));
    printf("Set MSB Byte = %u\n",Set_MSB_Byte(num));
    printf("Set LSB Nibble = %u\n",Set_LSB_Nibble(num));
    printf("Set MSB Nibble  = %u\n",Set_MSB_Nibble(num));
    printf("Set %d Bits = %u\n",n,Set_N_Bits(num,n));
    printf("Clear %d Bits = %u\n",n,Clear_N_Bits(num,n));
    printf("Toggle %d Bits = %u\n",n,Toggle_N_Bits(num,n));   
    return 0;
}
unsigned int Set_LSB_Byte(unsigned int num)
{
    return num | 0xFF;
}
unsigned int Set_MSB_Byte(unsigned int num)
{
    return num | 0xFF000000;
}
unsigned int Set_LSB_Nibble(unsigned int num)
{
    return num | 0x0F;
}
unsigned int Set_MSB_Nibble(unsigned int num)
{
    return num | 0xF0000000;
}
unsigned int Set_N_Bits(unsigned int num,int n)
{
    return num | ((1 << n) - 1);
}
unsigned int Clear_N_Bits(unsigned int num,int n)
{
    return num & ~((1 << n) - 1);
}
unsigned int Toggle_N_Bits(unsigned int num,int n)
{
    return num ^ ((1 << n) - 1);
}