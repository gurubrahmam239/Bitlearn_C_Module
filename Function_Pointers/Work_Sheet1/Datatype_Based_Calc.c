
/*
Multi-dimensional Function Pointer Array
Define arithmetic functions for both int and float types
 (e.g., intAdd, floatAdd).
Organize the function pointers in a two-dimensional array:
First dimension: operation type (arithmetic, bitwise)
Second dimension: data type (int, float)
Demonstrate calling the correct function based on selected
 type and operation.
 */
#include<stdio.h>
void Int_Add();
void Int_And();
void Float_Add();
void Float_Multiply();
int main()
{
    int operation,type;
    void (*Function[2][2])() =
    {
        {Int_Add,Float_Add},
        {Int_And,Float_Multiply}
    };
    printf("Operation Types:\n");
    printf("0.Arithmetic\n");
    printf("1.Bitwise\n");
    printf("Enter operation type:\n");
    scanf("%d",&operation);
    printf("Data Types:\n");
    printf("0.Int\n");
    printf("1.Float\n");
    printf("Enter data type:\n");
    scanf("%d",&type);
    if(operation < 0 || operation > 1 || type < 0 || type > 1)
    {
        printf("Invalid selection");
        return 0;
    }
    Function[operation][type]();   
    return 0;
}
void Int_Add()
{
    int a,b;
    printf("Enter two integers:\n");
    scanf("%d%d",&a,&b);   
    printf("Addition = %d",a+b);
}
void Float_Add()
{
    float a,b;
    printf("Enter two float values:\n");
    scanf("%f%f",&a,&b);   
    printf("Addition = %.2f",a+b);
}
void Int_And()
{
    int a,b;
    printf("Enter two integers:\n");
    scanf("%d%d",&a,&b);   
    printf("Bitwise AND = %d",a&b);
}
void Float_Multiply()
{
    float a,b;
    printf("Enter two float values:\n");
    scanf("%f%f",&a,&b);    
    printf("Multiplication = %.2f",a*b);
}
