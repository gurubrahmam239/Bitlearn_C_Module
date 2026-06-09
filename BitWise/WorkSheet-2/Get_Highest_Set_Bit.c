
/*
7. Get highest set bit of a number
Question: Write a C program to find the position of the highest set bit in a number.
Sample data: Input: 18 (binary 10010)
Expected output: Highest set bit of 18 is at position 4 (zero-based)
*/
#include<stdio.h>
void Get_Highest_Set_Bit(int num);
int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    Get_Highest_Set_Bit(num);
}
void Get_Highest_Set_Bit(int num)
{
    int pos=-1,bit=31;
    while(num>=0)
    {
        if((num>>bit)&1)
        {
            pos=bit;
            break;
        }
        bit--;
    }   
    printf("Highest set bit is at position %d",pos);
}