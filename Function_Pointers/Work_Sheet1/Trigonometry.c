
/*
Math Function Framework
Write wrapper functions around standard mathematical 
functions (sin, cos, tan, log) with the same function prototype.
Store pointers to these functions in an array.
Provide an interface for users to select and execute a
 math function on a given floating-point input.
*/
#include<stdio.h>
#include<math.h>
double Sin_Function(double x);
double Cos_Function(double x);
double Tan_Function(double x);
double Log_Function(double x);
int main()
{
    double num,result;
    int choice;
    double (*Math_Function[4])(double) =
    {
        Sin_Function,
        Cos_Function,
        Tan_Function,
        Log_Function
    };
    printf("1.sin(x)\n");
    printf("2.cos(x)\n");
    printf("3.tan(x)\n");
    printf("4.log(x)\n");
    printf("Enter your choice:\n");
    scanf("%d",&choice);
    if(choice < 1 || choice > 4)
    {
        printf("Invalid choice");
        return 0;
    }
    printf("Enter a number:\n");
    scanf("%lf",&num);
    result = Math_Function[choice-1](num);
    printf("Result = %.2lf",result);   
    return 0;
}
double Sin_Function(double x)
{
    return sin(x);
}
double Cos_Function(double x)
{
    return cos(x);
}
double Tan_Function(double x)
{
    return tan(x);
}
double Log_Function(double x)
{
    return log(x);
}
