
/*
Working with Const and Volatile Pointers
Goal: Demonstrate how const and volatile qualifiers affect pointer behavior in hardware register access.
Activity:
Define a dummy hardware register address using #define:
#define REG_BASE 0x40000000
Declare pointers with different qualifiers:
volatile uint32_t *reg_modifiable = (uint32_t *)REG_BASE;
const uint32_t *reg_readonly = (const uint32_t *)REG_BASE;
const volatile uint32_t *reg_const_volatile = (const volatile uint32_t *)REG_BASE;
Attempt to write to and read from each pointer and note compiler behavior.
*/
#include<stdio.h>
#include<stdint.h>
#define REG_BASE 0x40000000
void Test_Modifiable_Register();
void Test_Readonly_Register();
void Test_Const_Volatile_Register();
int main()
{
    Test_Modifiable_Register();
    Test_Readonly_Register();
    Test_Const_Volatile_Register();
    return 0;
}

void Test_Modifiable_Register()
{
    volatile uint32_t *reg_modifiable = (uint32_t *)REG_BASE;
    *reg_modifiable = 100;   
    printf("Modifiable Register Value = %u\n",*reg_modifiable);
}
void Test_Readonly_Register()
{
    const uint32_t *reg_readonly = (const uint32_t *)REG_BASE;
    printf("Read Only Register Value = %u\n",*reg_readonly);   
    // *reg_readonly = 200;
    // Compiler error because pointer is const
}
void Test_Const_Volatile_Register()
{
    const volatile uint32_t *reg_const_volatile =
    (const volatile uint32_t *)REG_BASE;
    printf("Const Volatile Register Value = %u\n",
    *reg_const_volatile);   
    // *reg_const_volatile = 300;
    // Compiler error because pointer is const
}
