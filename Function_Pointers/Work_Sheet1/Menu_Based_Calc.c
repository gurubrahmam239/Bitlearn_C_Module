
/*
Mathematical Operations with Function Pointers
Log Session four simple mathematical functions 
(add, subtract, multiply, divide) that accept 
two integer arguments and return an integer.
Use a single function pointer to dynamically select
 and execute one of these operations based on user input.
*/
 #include<stdio.h>
int Add(int a,int b);
int Subtract(int a,int b);
int Multiply(int a,int b);
int Divide(int a,int b);
int main()
{
    int a,b,choice,result;
    int (*Operation)(int,int);
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("1.Add\n");
    printf("2.Subtract\n");
    printf("3.Multiply\n");
    printf("4.Divide\n");
    printf("Enter your choice:\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            Operation = Add;
            break;
        case 2:
            Operation = Subtract;
            break;
        case 3:
            Operation = Multiply;
            break;
        case 4:
            Operation = Divide;
            break;       
        default:
            printf("Invalid choice");
            return 0;
    }
    result = Operation(a,b);
    printf("Result = %d",result);   
    return 0;
}
int Add(int a,int b)
{
    return a+b;
}
int Subtract(int a,int b)
{
    return a-b;
}
int Multiply(int a,int b)
{
    return a*b;
}
int Divide(int a,int b)
{
    return a/b;
}