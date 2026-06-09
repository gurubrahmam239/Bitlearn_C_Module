
/*
Union Array
Declare an array of unions, each holding an int, 
a float, or a char.
Write a program to assign values of different types
 to each element and display them. Observe any issues.
 */
 #include<stdio.h>
union Data
{
    int num;
    float value;
    char ch;
};
void Print_Int(union Data d);
void Print_Float(union Data d);
void Print_Char(union Data d);
int main()
{
    union Data arr[3];
    arr[0].num = 100;
    arr[1].value = 25.5;
    arr[2].ch = 'A';
    Print_Int(arr[0]);
    Print_Float(arr[1]);
    Print_Char(arr[2]);
    printf("\nAccessing wrong members:\n");
    printf("arr[0] as float: %.2f\n",arr[0].value);
    printf("arr[1] as char: %c\n",arr[1].ch);
    printf("arr[2] as int: %d\n",arr[2].num);   
    return 0;
}
void Print_Int(union Data d)
{
    printf("Integer value: %d\n",d.num);
}
void Print_Float(union Data d)
{
    printf("Float value: %.2f\n",d.value);
}
void Print_Char(union Data d)
{
    printf("Character value: %c\n",d.ch);
}