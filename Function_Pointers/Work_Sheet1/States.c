
/*
state Machine Implementation
Implement a basic state machine (initState, runState, stopState, errorState) 
with each state represented by a separate function.
Use function pointers to transition between states based 
on user input or internal conditions.
Demonstrate state transitions clearly in your program’s output.
*/
#include<stdio.h>
void Init_State();
void Run_State();
void Stop_State();
void Error_State();
int main()
{
    int choice;
    void (*State[4])() =
    {
        Init_State,
        Run_State,
        Stop_State,
        Error_State
    };
    while(1)
    {
        printf("\n1.Init State\n");
        printf("2.Run State\n");
        printf("3.Stop State\n");
        printf("4.Error State\n");
        printf("5.Exit\n");
        printf("Enter your choice:\n");
        scanf("%d",&choice);   
        if(choice >= 1 && choice <= 4)
        {
            State[choice-1]();
        }
        else if(choice == 5)
        {
            printf("Exiting State Machine");
            break;
        }
        else
        {
            printf("Invalid choice");
        }
    }   
    return 0;
}
void Init_State()
{
    printf("Transitioned to INIT STATE");
}
void Run_State()
{
    printf("Transitioned to RUN STATE");
}
void Stop_State()
{
    printf("Transitioned to STOP STATE");
}
void Error_State()
{
    printf("Transitioned to ERROR STATE");
}
