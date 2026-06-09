
/*
Implement the function setbits(x, p, n, y) that sets n bits in x starting at
 position p with the rightmost n bits of y.
 */
#include<stdio.h>
unsigned int SetBits(unsigned int x,int p,int n,unsigned int y);
int main()
{
    unsigned int x, y;
    int p, n;
    printf("Enter x: ");
    scanf("%u",&x);
    printf("Enter y: ");
    scanf("%u",&y);
    printf("Enter position p: ");
    scanf("%d",&p);
    printf("Enter number of bits n: ");
    scanf("%d",&n);
    printf("Result = %u\n",SetBits(x,p,n,y));   
    return 0;
}
unsigned int SetBits(unsigned int x,int p,int n,unsigned int y)
{
    unsigned int mask;
    mask = ((1 << n) - 1);
    x = x & ~(mask << (p - n + 1));
    x = x | ((y & mask) << (p - n + 1));   
    return x;
}