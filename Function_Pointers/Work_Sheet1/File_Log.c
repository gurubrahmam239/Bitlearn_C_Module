
/*
Dynamic Logging Mechanism
Implement three logging functions (consoleLog, fileLog, networkLog) 
with a common signature.
Allow the program to select the appropriate logging method
 dynamically through function pointers.
Demonstrate switching between logging methods at runtime based
 on user input
 */
#include<stdio.h>
#include<stdlib.h>
void Console_Log(char message[]);
void File_Log(char message[]);
void Network_Log(char message[]);
int main()
{
    int choice;
    char message[100];
    void (*Logger)(char []);
    printf("Enter log message:\n");
    scanf(" %[^\n]",message);
    printf("\n1.Console Log");
    printf("\n2.File Log");
    printf("\n3.Network Log");
    printf("\nEnter your choice:\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            Logger = Console_Log;
            break;
        case 2:
            Logger = File_Log;
            break;
        case 3:
            Logger = Network_Log;
            break;       
        default:
            printf("Invalid choice");
            return 0;
    }
    Logger(message);   
    return 0;
}
void Console_Log(char message[])
{
    printf("Console Log: %s\n",message);
}
void File_Log(char message[])
{
    FILE *fp;
    fp = fopen("log.txt","a");
    if(fp == NULL)
    {
        printf("File opening failed");
        return;
    }
    fprintf(fp,"File Log: %s\n",message);
    fclose(fp);   
    printf("Message logged into file");
}
void Network_Log(char message[])
{
    printf("Network Log Sent: %s\n",message);
}
