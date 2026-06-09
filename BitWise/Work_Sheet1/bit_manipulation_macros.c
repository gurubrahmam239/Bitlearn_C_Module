
/*
Write macros to set, clear, and toggle the nth bit using bitwise operators.
*/
#include<stdio.h>

#define SET_BIT(num,n)     ((num)|(1<<(n)))
#define CLEAR_BIT(num,n)   ((num)&~(1<<(n)))
#define TOGGLE_BIT(num,n)  ((num)^(1<<(n)))
int main()
{
    int num, n;
    printf("Enter number: ");
    scanf("%d",&num);
    printf("Enter bit position: ");
    scanf("%d",&n);
    printf("After Setting Bit   : %d\n",SET_BIT(num,n));
    printf("After Clearing Bit  : %d\n",CLEAR_BIT(num,n));
    printf("After Toggling Bit  : %d\n",TOGGLE_BIT(num,n));   
    return 0;
}