
/*
Function Pointer as Return Value
Implement multiple arithmetic functions (add, subtract, multiply).
Write a function getOperation(char *name) that takes a string
 (like "add" or "subtract") and returns a pointer to the
  corresponding function.
Use this return value to perform the selected operation 
on user-provided numbers.
*/
#include<stdio.h>
#include<string.h>
int Add(int a,int b);
int Subtract(int a,int b);
int Multiply(int a,int b);
int (*Get_Operation(char name[]))(int,int);
int main()
{
    int a,b,result;
    char operation[20];
    int (*Operation)(int,int);
    printf("Enter operation name:\n");
    scanf("%s",operation);
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    Operation=Get_Operation(operation);
    if(Operation==NULL)
    {
        printf("Invalid operation");
        return 0;
    }
    result=Operation(a,b);
    printf("Result = %d",result);   
    return 0;
}
int (*Get_Operation(char name[]))(int,int)
{
    if(strcmp(name,"add")==0)
    {
        return Add;
    }
    else if(strcmp(name,"subtract")==0)
    {
        return Subtract;
    }
    else if(strcmp(name,"multiply")==0)
    {
        return Multiply;
    }   
    return NULL;
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
