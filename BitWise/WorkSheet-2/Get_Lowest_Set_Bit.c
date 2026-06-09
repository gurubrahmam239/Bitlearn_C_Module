
/*
8. Get lowest set bit of a number
Question: Write a C program to find the position of the lowest set bit in a number.
Sample data: Input: 18 (binary 10010)
Expected output: Lowest set bit of 18 is at position 1 (zero-based)
*/
#include<stdio.h>
void Get_Lowest_Set_Bit(int num);
int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);   
    Get_Lowest_Set_Bit(num);
}
void Get_Lowest_Set_Bit(int num)
{
    int pos=0;
    while(num)
    {
        if((num>>pos)&1)
        {
            printf("Lowest set bit is at position %d",pos);
            return;
        }       
        pos++;
    }
}