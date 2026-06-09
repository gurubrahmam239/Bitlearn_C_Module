/*
Nested Structures and Arrays within Structures
Goal
Explore how to organize complex data using nested structures and how to embed arrays inside structures for buffer management.

Activity
Log Session a structure with another structure as a member.
Log Session an array of structures to hold multiple sensor values.
Include arrays within a structure to buffer a set of samples.
Model a protocol layer with header and payload sub-structures.
Tip: Use typedef to simplify nested structure declarations.
*/
#include<stdio.h>
typedef struct
{
    int id;
    char name[20];
    
}SensorInfo;
typedef struct
{
    SensorInfo info;
    int samples[5];
    
}SensorData;
typedef struct
{
    int source;
    int destination;
    
}Header;
typedef struct
{
    char data[50];
    
}Payload;
typedef struct
{
    Header header;
    Payload payload;
    
}ProtocolPacket;
void Print_Sensor_Data(SensorData sensor[],int count);
void Print_Protocol_Data(ProtocolPacket packet);
int main()
{
    SensorData sensor[2];
    ProtocolPacket packet;
    sensor[0].info.id = 1;
    sprintf(sensor[0].info.name,"Temp");
    sensor[1].info.id = 2;
    sprintf(sensor[1].info.name,"Pressure");
    for(int i=0;i<5;i++)
    {
        sensor[0].samples[i] = i + 10;
        sensor[1].samples[i] = i + 20;
    }
    packet.header.source = 100;
    packet.header.destination = 200;
    sprintf(packet.payload.data,"Embedded Data");
    Print_Sensor_Data(sensor,2);
    printf("\n");
    Print_Protocol_Data(packet);   
    return 0;
}
void Print_Sensor_Data(SensorData sensor[],int count)
{
    for(int i=0;i<count;i++)
    {
        printf("Sensor ID = %d\n",sensor[i].info.id);
        printf("Sensor Name = %s\n",sensor[i].info.name);
        printf("Samples: ");
        for(int j=0;j<5;j++)
        {
            printf("%d ",
            sensor[i].samples[j]);
        }       
        printf("\n\n");
    }
}
void Print_Protocol_Data(ProtocolPacket packet)
{
    printf("Protocol Header\n");
    printf("Source = %d\n",packet.header.source);
    printf("Destination = %d\n",packet.header.destination);   
    printf("Payload = %s\n",packet.payload.data);
}