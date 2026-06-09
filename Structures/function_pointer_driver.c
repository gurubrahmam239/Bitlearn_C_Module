/*
 Function Pointers in Structures
Goal
Learn how to include and use function pointers inside structures for callback mechanisms and dynamic behavior in embedded systems.

Activity
Define a structure containing function pointers.
Initialize it with different functions and invoke them.
Use this setup to simulate a hardware driver interface with different behavior implementations.
Demonstrate dynamic assignment and execution of function pointers based on a condition or input.
Tip: Use typedef for cleaner function pointer declarations.
*/
#include<stdio.h>
typedef void (*DriverFunction)(void);
void Led_On(void);
void Led_Off(void);
void Motor_Start(void);
void Motor_Stop(void);
struct Driver
{
    DriverFunction start;
    DriverFunction stop;
};
int main()
{
    struct Driver device;
    int choice;
    printf("1.LED Driver\n");
    printf("2.Motor Driver\n");
    printf("Enter your choice:\n");
    scanf("%d",&choice);
    if(choice == 1)
    {
        device.start = Led_On;
        device.stop = Led_Off;
    }
    else if(choice == 2)
    {
        device.start = Motor_Start;
        device.stop = Motor_Stop;
    }
    else
    {
        printf("Invalid choice");
        return 0;
    }
    printf("\nStarting Device:\n");
    device.start();
    printf("Stopping Device:\n");
    device.stop();   
    return 0;
}
void Led_On(void)
{
    printf("LED Turned ON\n");
}
void Led_Off(void)
{
    printf("LED Turned OFF\n");
}
void Motor_Start(void)
{
    printf("Motor Started\n");
}
void Motor_Stop(void)
{
    printf("Motor Stopped\n");
}