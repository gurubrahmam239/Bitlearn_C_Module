
/*
Recursive Function Pointer
Implement a recursive function (such as factorial or fibonacci)
 using a function pointer variable instead of directly calling 
 the function by name.
Show that the recursion works correctly using only the pointer.
*/
#include<stdio.h>
int Factorial(int num);
int (*Func_Ptr)(int);
int main()
{
    int num,result;
    Func_Ptr=Factorial;
    printf("Enter a number:\n");
    scanf("%d",&num);
    result=Func_Ptr(num);
    printf("Factorial = %d",result);   
    return 0;
}
int Factorial(int num)
{
    if(num==0 || num==1)
    {
        return 1;
    }    
    return num*Func_Ptr(num-1);
}
