
/*
Union Declaration and Initialization
Declare a union named Data with an int, a float, 
and a char array of size 20.
Write a program to initialize 
and print each member, one after the other. 
Observe and explain the output.
*/
#include<stdio.h>
#include<string.h>
union Data
{
    int num;
    float value;
    char str[20];
};
void Print_Int(union Data *d);
void Print_Float(union Data *d);
void Print_String(union Data *d);
int main()
{
    union Data d;
    d.num = 100;
    Print_Int(&d);
    d.value = 12.5;
    Print_Float(&d);
    strcpy(d.str,"Hello");
    Print_String(&d);
    printf("\nAfter storing string:\n");
    Print_Int(&d);
    Print_Float(&d);
    Print_String(&d);   
    return 0;
}
void Print_Int(union Data *d)
{
    printf("Integer value: %d\n",d->num);
}
void Print_Float(union Data *d)
{
    printf("Float value: %.2f\n",d->value);
}
void Print_String(union Data *d)
{
    printf("String value: %s\n",d->str);
}