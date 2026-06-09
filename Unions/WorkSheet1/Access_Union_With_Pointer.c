
/*
Pointer to a Union
Write a program that defines a union called Sample 
with an int and a float.
Declare a pointer to the union. Assign values using the
 pointer and print the results.
 */
 #include<stdio.h>
union Sample
{
    int num;
    float value;
};
void Print_Int(union Sample *ptr);
void Print_Float(union Sample *ptr);

int main()
{
    union Sample s;
    union Sample *ptr;
    ptr = &s;
    ptr->num = 100;
    Print_Int(ptr);
    ptr->value = 25.5;
    Print_Float(ptr);   
    return 0;
}

void Print_Int(union Sample *ptr)
{
    printf("Integer value: %d\n",ptr->num);
}

void Print_Float(union Sample *ptr)
{
    printf("Float value: %.2f\n",ptr->value);
}