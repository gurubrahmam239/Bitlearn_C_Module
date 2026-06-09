
/*
How can you count the number of set bits in a floating-point number?
*/
#include <stdio.h>
union FloatBits
{
    float f;
    unsigned int i;
};
int Count_Set_Bits(unsigned int num)
{
    int count = 0;
    while(num)
    {
        count += num & 1;
        num >>= 1;
    }
    return count;
}
int main()
{
    union FloatBits data;
    printf("Enter a float value: ");
    scanf("%f", &data.f);
    printf("Float Value = %f\n", data.f);
    printf("Bit Pattern = %u\n", data.i);
    printf("Number of Set Bits = %d\n",Count_Set_Bits(data.i));
    return 0;
}