
/*
Menu-driven Calculator Using Function Pointers
Implement mathematical operations
 (power, modulo, squareRoot) as separate functions.
Store these operation functions
 in a function pointer array.
Provide a user-interactive menu to select and execute the
 chosen operation on input values.
 */
#include<stdio.h>
#include<math.h>
double Power(double a,double b);
double Modulo(double a,double b);
double Square_Root(double a,double b);
int main()
{
    double a,b,result;
    int choice;
    double (*Operation[3])(double,double) =
    {
        Power,
        Modulo,
        Square_Root
    };
    printf("1.Power\n");
    printf("2.Modulo\n");
    printf("3.Square Root\n");
    printf("Enter your choice:\n");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("Enter base and exponent:\n");
        scanf("%lf%lf",&a,&b);
    }
    else if(choice==2)
    {
        printf("Enter two numbers:\n");
        scanf("%lf%lf",&a,&b);
    }
    else if(choice==3)
    {
        printf("Enter a number:\n");
        scanf("%lf",&a);   
        b = 0;
    }
    else
    {
        printf("Invalid choice");
        return 0;
    }
    result = Operation[choice-1](a,b);
    printf("Result = %.2lf",result);   
    return 0;
}
double Power(double a,double b)
{
    return pow(a,b);
}
double Modulo(double a,double b)
{
    return (int)a%(int)b;
}
double Square_Root(double a,double b)
{
    return sqrt(a);
}
