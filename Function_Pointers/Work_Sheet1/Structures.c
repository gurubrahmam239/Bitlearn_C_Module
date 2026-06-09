
/*
Array of Function Pointers in a Structure
Define a structure (e.g., Calculator) that contains an array of
 function pointers for operations (add, subtract, multiply).
Instantiate the structure and use it to call the various 
operations on input values, demonstrating how the structure can
perform different calculations.
 */
#include<stdio.h>
int Add(int a,int b);
int Subtract(int a,int b);
int Multiply(int a,int b);
struct Calculator
{
    int (*Operation[3])(int,int);
};
int main()
{
    struct Calculator calc;
    int a,b,choice,result;
    calc.Operation[0] = Add;
    calc.Operation[1] = Subtract;
    calc.Operation[2] = Multiply;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("1.Add\n");
    printf("2.Subtract\n");
    printf("3.Multiply\n");
    printf("Enter your choice:\n");
    scanf("%d",&choice);
    if(choice<1 || choice>3)
    {
        printf("Invalid choice");
        return 0;
    }
    result = calc.Operation[choice-1](a,b);
    printf("Result = %d",result);   
    return 0;
}
int Add(int a,int b)
{
    return a + b;
}
int Subtract(int a,int b)
{
    return a - b;
}
int Multiply(int a,int b)
{
    return a * b;
}

