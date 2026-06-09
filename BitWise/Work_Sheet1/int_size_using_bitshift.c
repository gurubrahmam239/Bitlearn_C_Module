
/*
Write a program to determine the size (in bits) of an integer using bit shifts.
*/
#include<stdio.h>
int Find_Int_Size_Bits(void);
int main()
{
    printf("Size of int = %d bits\n",Find_Int_Size_Bits());
    return 0;
}
int Find_Int_Size_Bits(void)
{
    unsigned int num = ~0;
    int count = 0;
    while(num)
    {
        count++;
        
        num = num >> 1;
    }
    return count;
}