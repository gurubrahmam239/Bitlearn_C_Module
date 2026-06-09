/*
 Structure vs Union in Embedded Systems
Goal
Understand how structures and unions differ in terms of memory layout, access, and use in embedded systems, particularly in data interpretation and memory saving.

Activity
Define a structure and a union with three different data types (e.g., char, int, float).
Print the size of each and compare.
Write values to each member and observe the behavior.
Map the union onto a byte buffer and visualize how different types share memory.
Document a scenario where only one data type is valid at a time (e.g., packet command structure).
Tip: Use sizeof() and printf() to track memory usage and value overlap
*/
#include<stdio.h>
#include<stdint.h>
struct DataStruct
{
    char ch;
    int num;
    float value;
};
union DataUnion
{
    char ch;
    int num;
    float value;
};
void Compare_Sizes(void);
void Structure_Demo(void);
void Union_Demo(void);
void Buffer_Mapping(void);
void Packet_Command_Demo(void);
int main()
{
    Compare_Sizes();
    printf("\n");
    Structure_Demo();
    printf("\n");
    Union_Demo();
    printf("\n");
    Buffer_Mapping();
    printf("\n");
    Packet_Command_Demo();
    return 0;
}

void Compare_Sizes(void)
{
    printf("Structure Size = %lu\n",
    sizeof(struct DataStruct));
    printf("Union Size = %lu\n",
    sizeof(union DataUnion));
}

void Structure_Demo(void)
{
    struct DataStruct s;
    s.ch = 'A';
    s.num = 100;
    s.value = 12.5;
    printf("Structure Values:\n");
    printf("Char = %c\n",s.ch);
    printf("Int = %d\n",s.num);
    printf("Float = %.2f\n",s.value);
}

void Union_Demo(void)
{
    union DataUnion u;
    u.ch = 'A';
    printf("After char assignment = %c\n",u.ch);
    u.num = 100;
    printf("After int assignment = %d\n",u.num);
    u.value = 12.5;
    printf("After float assignment:\n");
    printf("Float = %.2f\n",u.value);
    printf("Int = %d\n",u.num);   
    printf("Char = %c\n",u.ch);
}
void Buffer_Mapping(void)
{
    union DataUnion u;
    uint8_t *ptr;
    u.num = 0x12345678;
    ptr = (uint8_t *)&u;
    printf("Union mapped to byte buffer:\n");
    for(int i=0;i<sizeof(int);i++)
    {
        printf("%02X ",*(ptr+i));
    }   
    printf("\n");
}
void Packet_Command_Demo(void)
{
    union
    {
        int command_id;
        float sensor_value;
        char status;
        
    }packet;
    packet.command_id = 101;
    printf("Packet Command ID = %d\n",packet.command_id);
    packet.sensor_value = 25.5;
    printf("Packet Sensor Value = %.2f\n",packet.sensor_value);   
    printf("Only one member is valid at a time in union\n");
}