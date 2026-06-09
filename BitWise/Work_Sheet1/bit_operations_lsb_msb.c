
/*
Write a program to perform the following operations on the Least and Most Significant Bits (LSB/MSB) of a given integer:
Set the LSB to 1
Clear the LSB (set to 0)
Toggle the LSB
Set the MSB to 1
Clear the MSB (set to 0)
Toggle the MSB
Set a specific bit to 1
Clear a specific bit
Toggle a specific bit
*/

#include<stdio.h>
int Set_LSB(int num);
int Clear_LSB(int num);
int Toggle_LSB(int num);
int Set_MSB(int num);
int Clear_MSB(int num);
int Toggle_MSB(int num);
int Set_Bit(int num,int pos);
int Clear_Bit(int num,int pos);
int Toggle_Bit(int num,int pos);

int main()
{
    int num;
    int pos;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Enter bit position: ");
    scanf("%d",&pos);
    printf("Set LSB       = %d\n",Set_LSB(num));
    printf("Clear LSB     = %d\n",Clear_LSB(num));
    printf("Toggle LSB    = %d\n",Toggle_LSB(num));
    printf("Set MSB       = %d\n",Set_MSB(num));
    printf("Clear MSB     = %d\n",Clear_MSB(num));
    printf("Toggle MSB    = %d\n",Toggle_MSB(num));
    printf("Set Bit       = %d\n",Set_Bit(num,pos));
    printf("Clear Bit     = %d\n",Clear_Bit(num,pos));
    printf("Toggle Bit    = %d\n",Toggle_Bit(num,pos));
    
    return 0;
}

int Set_LSB(int num)
{
    return num|1;
}

int Clear_LSB(int num)
{
    return num&(~1);
}

int Toggle_LSB(int num)
{
    return num^1;
}

int Set_MSB(int num)
{
    return num|(1 << 31);
}

int Clear_MSB(int num)
{
    return num&~(1<<31);
}

int Toggle_MSB(int num)
{
    return num^(1<<31);
}

int Set_Bit(int num,int pos)
{
    return num|(1<<pos);
}

int Clear_Bit(int num,int pos)
{
    return num&~(1<<pos);
}

int Toggle_Bit(int num,int pos)
{
    return num^(1<<pos);
}