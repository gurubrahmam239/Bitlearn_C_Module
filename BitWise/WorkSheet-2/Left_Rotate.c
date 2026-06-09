
/*
13. Rotate bits of a given number
Question: Write a C program to rotate bits of a 
number to the left or right by a given number of positions.
Sample data: Input: number=16 (binary 00010000), 
rotate left by 2
Expected output: Result after rotation: 64 (binary 01000000)
*/

#include<stdio.h>
void Left_Rotate(int num,int pos);
int main()
{
    int num,pos;
    printf("Enter the number:\n");
    scanf("%d",&num);
    printf("Enter rotate positions:\n");
    scanf("%d",&pos);   
    Left_Rotate(num,pos);
}
void Left_Rotate(int num,int pos)
{
    for(int i=0;i<pos;i++)
    {
        int msb=(num>>7)&1;
        num=num<<1;   
        num=num|msb;
    }
    num=num&0xFF;    
    printf("Result after rotation: %d",num);
}
