
/*
16. Check whether a number is even or odd using bitwise operator
Question: Write a C program to check whether a number is even or odd using bitwise AND operator.
Sample data: Input: 7
Expected output: 7 is odd
*/
#include<stdio.h>
void Check_Even_Odd(int num);
int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);  
    Check_Even_Odd(num);
}
void Check_Even_Odd(int num)
{
    if(num & 1)
    {
        printf("%d is odd",num);
    }
    else
    {
        printf("%d is even",num);
    }
}
