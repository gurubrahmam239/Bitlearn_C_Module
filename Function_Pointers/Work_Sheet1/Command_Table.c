
/*
Replace Switch-Case with Function Pointer Table
Simulate a command-based application where each command is
 represented by a number.
Instead of using a large switch-case block to handle commands,
 create a function pointer table.
Use the input command number as an index to call the
 corresponding handler function via the function pointer table.
 */
#include<stdio.h>
void Add_Command();
void Delete_Command();
void Update_Command();
void Display_Command();
int main()
{
    int command;
    void (*Command_Table[4])() =
    {
        Add_Command,
        Delete_Command,
        Update_Command,
        Display_Command
    };
    while(1)
    {
        printf("\nCommands:");
        printf("\n0.Add");
        printf("\n1.Delete");
        printf("\n2.Update");
        printf("\n3.Display");
        printf("\n4.Exit");
        printf("\nEnter command number:\n");
        scanf("%d",&command);   
        if(command >= 0 && command <= 3)
        {
            Command_Table[command]();
        }
        else if(command == 4)
        {
            printf("Exiting Application");
            break;
        }
        else
        {
            printf("Invalid command");
        }
    }   
    return 0;
}
void Add_Command()
{
    printf("Add Command Executed");
}
void Delete_Command()
{
    printf("Delete Command Executed");
}
void Update_Command()
{
    printf("Update Command Executed");
}
void Display_Command()
{
    printf("Display Command Executed");
}
