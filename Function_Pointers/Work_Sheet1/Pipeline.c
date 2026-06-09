
/*
Chained Function Pointer Calls
Write several functions that transform an integer
 (e.g., doubleValue, increment, square).
Log Session an array of function pointers representing a 
pipeline of operations.
Pass a number through the pipeline by applying each function
 in sequence, using the array of pointers.
 */
#include<stdio.h>
int Double_Value(int num);
int Increment(int num);
int Square(int num);
int main()
{
    int num;
    int (*Pipeline[3])(int) =
    {
        Double_Value,
        Increment,
        Square
    };
    printf("Enter a number:\n");
    scanf("%d",&num);
    printf("Initial value: %d\n",num);
    for(int i=0;i<3;i++)
    {
        num = Pipeline[i](num);   
        printf("After step %d: %d\n",i+1,num);
    }
    printf("Final result: %d",num);   
    return 0;
}
int Double_Value(int num)
{
    return num * 2;
}
int Increment(int num)
{
    return num + 1;
}
int Square(int num)
{
    return num * num;
}
