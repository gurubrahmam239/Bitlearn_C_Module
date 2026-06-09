
/*
Interrupt Handler Simulation
Log Session several interrupt handler functions
 (e.g., timerInterrupt, keyboardInterrupt, errorInterrupt).
Map these interrupt handlers using an array of function pointers.
Simulate interrupts by invoking appropriate interrupt handlers 
using their pointers based on interrupt numbers entered by the user.
*/
#include<stdio.h>
void Timer_Interrupt();
void Keyboard_Interrupt();
void Error_Interrupt();
int main()
{
    int interrupt;
    void (*Interrupt_Handler[3])() =
    {
        Timer_Interrupt,
        Keyboard_Interrupt,
        Error_Interrupt
    };
    while(1)
    {
        printf("\nInterrupt Numbers:");
        printf("\n0.Timer Interrupt");
        printf("\n1.Keyboard Interrupt");
        printf("\n2.Error Interrupt");
        printf("\n3.Exit");
        printf("\nEnter interrupt number:\n");
        scanf("%d",&interrupt);   
        if(interrupt >= 0 && interrupt <= 2)
        {
            printf("Interrupt Triggered:\n");
            
            Interrupt_Handler[interrupt]();
        }
        else if(interrupt == 3)
        {
            printf("Exiting Interrupt System");
            break;
        }
        else
        {
            printf("Invalid interrupt number");
        }
    }   
    return 0;
}
void Timer_Interrupt()
{
    printf("Timer Interrupt Handler Executed");
}
void Keyboard_Interrupt()
{
    printf("Keyboard Interrupt Handler Executed");
}
void Error_Interrupt()
{
    printf("Error Interrupt Handler Executed");
}