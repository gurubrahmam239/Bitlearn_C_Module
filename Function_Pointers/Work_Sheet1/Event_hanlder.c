
/*
Event Handling System
Define events such as buttonPressEvent, sensorTriggerEvent.
Implement handler functions for these events.
Log Session an array of function pointers mapping each
 event to its corresponding handler function.
Simulate event triggers, calling the appropriate handler 
through function pointers.
*/
#include<stdio.h>
void Button_Press_Event();
void Sensor_Trigger_Event();
void Temperature_Event();
int main()
{
    int choice;
    void (*Event_Handler[3])() =
    {
        Button_Press_Event,
        Sensor_Trigger_Event,
        Temperature_Event
    };
    while(1)
    {
        printf("\n1.Button Press Event");
        printf("\n2.Sensor Trigger Event");
        printf("\n3.Temperature Event");
        printf("\n4.Exit");
        printf("\nEnter your choice:\n");
        scanf("%d",&choice);   
        if(choice >= 1 && choice <= 3)
        {
            printf("Event Triggered:\n");
            
            Event_Handler[choice-1]();
        }
        else if(choice == 4)
        {
            printf("Exiting Event System");
            break;
        }
        else
        {
            printf("Invalid choice");
        }
    }   
    return 0;
}
void Button_Press_Event()
{
    printf("Button Press Event Handler Executed");
}
void Sensor_Trigger_Event()
{
    printf("Sensor Trigger Event Handler Executed");
}
void Temperature_Event()
{
    printf("Temperature Event Handler Executed");
}

