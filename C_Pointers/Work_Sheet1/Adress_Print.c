
/*
Visualizing Memory Addresses
Goal: Visualize how memory is arranged for variables.

Activity:

Declare three local variables.
Print their addresses using printf.
Observe the increasing/decreasing pattern.
*/
#include<stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    int c = 30;
    printf("Address of a = %p\n",&a);
    printf("Address of b = %p\n",&b);
    printf("Address of c = %p\n",&c);   
    return 0;
}