
/*
Pointer Type Compatibility
Goal: Understand the importance of matching pointer types.

Activity:

Declare int *ip; and float *fp;
Try assigning fp = ip; and observe compiler warning.
Correct the mismatch using proper types or casting
*/
#include<stdio.h>
int main()
{
    int a = 10;
    float b = 5.5;
    int *ip;
    float *fp;
    ip = &a;
    // fp = ip;
    // Compiler warning due to incompatible pointer types
    fp = &b;
    printf("Integer value = %d\n",*ip);
    printf("Float value = %.2f\n",*fp);    
    return 0;
}
