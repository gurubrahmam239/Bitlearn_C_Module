
/*
Function Pointer Arrays for Command Execution
Goal: Log Session an embedded command interface using an array of function pointers.
Activity:
Declare three functions representing device operations:
void init(void);
void start(void);
void stop(void);
Log Session an array of function pointers referencing these functions:
void (*cmd_table[])(void) = {init, start, stop};
Use an index or enum value to invoke the appropriate function via the array.
*/
#include<stdio.h>
void Init(void);
void Start(void);
void Stop(void);
enum Commands
{
    INIT,
    START,
    STOP
};
int main()
{
    int choice;
    void (*cmd_table[])(void) =
    {
        Init,
        Start,
        Stop
    };
    printf("0.Init\n");
    printf("1.Start\n");
    printf("2.Stop\n");
    printf("Enter command number:\n");
    scanf("%d",&choice);
    if(choice >= 0 && choice <= 2)
    {
        cmd_table[choice]();
    }
    else
    {
        printf("Invalid command");
    }   
    return 0;
}
void Init(void)
{
    printf("Device Initialization Executed");
}
void Start(void)
{
    printf("Device Start Executed");
}
void Stop(void)
{
    printf("Device Stop Executed");
}
