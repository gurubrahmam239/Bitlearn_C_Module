
/*
Accessing Union Members
Using the union from exercise 1, assign values to
 more than one member at a time and print all members.
Observe which value is retained and explain why.
*/
#include<stdio.h>
#include<string.h>
union Data
{
    int num;
    float value;
    char str[20];
};
void Print_Members(union Data *d);
int main()
{
    union Data d;
    d.num = 100;
    d.value = 25.5;
    strcpy(d.str,"Hello");
    Print_Members(&d);   
    return 0;
}
void Print_Members(union Data *d)
{
    printf("Integer value: %d\n",d->num);
    printf("Float value: %.2f\n",d->value);
    printf("String value: %s\n",d->str);
}