
/*
Write a program to convert a Little Endian integer to its Big Endian equivalent.
*/
#include<stdio.h>
unsigned int Little_To_Big_Endian(unsigned int num);
int main()
{
    unsigned int num;
    printf("Enter a hexadecimal number: ");
    scanf("%x",&num);
    printf("Little Endian Value : 0x%X\n",num);
    printf("Big Endian Value    : 0x%X\n",Little_To_Big_Endian(num));
    return 0;
}

unsigned int Little_To_Big_Endian(unsigned int num)
{
    return ((num&0x000000FF)<<24)|((num & 0x0000FF00) << 8)|((num & 0x00FF0000) >> 8)|((num & 0xFF000000) >> 24);
}