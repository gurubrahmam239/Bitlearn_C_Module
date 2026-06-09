
/*
Size of Union
Write a program to declare a union containing an int,
 a double, and a char.
Print the size of this union using sizeof. 
Compare the result with the size of a structure having
 the same members.
 */
#include<stdio.h>
union Data
{
    int num;
    double value;
    char ch;
};
struct Sample
{
    int num;
    double value;
    char ch;
};
void Print_Sizes();
int main()
{
    Print_Sizes();   
    return 0;
}
void Print_Sizes()
{
    printf("Size of union: %lu\n",sizeof(union Data));   
    printf("Size of structure: %lu\n",sizeof(struct Sample));
}