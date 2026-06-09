/*
Log Session a grocery store inventory where you can add, update, or remove items using a file.
Input: Add item: Milk, 2 litres, Rs.40
Output: Inventory file now includes the new item
*/
#include<stdio.h>
#include<string.h>
struct Item
{
    char name[50];
    char quantity[50];
    float price;
};
void Add_Item(char filename[]);
void Display_Items(char filename[]);
int main()
{
    char filename[] = "inventory.txt";
    Add_Item(filename);
    printf("\nInventory Contents:\n");
    Display_Items(filename);   
    return 0;
}
void Add_Item(char filename[])
{
    FILE *fp;
    struct Item item;
    fp = fopen(filename,"a");
    if(fp == NULL)
    {
        printf("File opening failed");
        return;
    }
    printf("Enter item name:\n");
    scanf("%s",item.name);
    getchar();
    printf("Enter quantity:\n");
    fgets(item.quantity,sizeof(item.quantity),stdin);
    item.quantity[strcspn(item.quantity,"\n")] = '\0';
    printf("Enter price:\n");
    scanf("%f",&item.price);
    fprintf(fp,"Item: %s Quantity: %s Price: Rs.%.2f\n",item.name,item.quantity,item.price);
    fclose(fp);   
    printf("Inventory file updated with new item\n");
}
void Display_Items(char filename[])
{
    FILE *fp;
    char line[200];
    fp = fopen(filename,"r");
    if(fp == NULL)
    {
        printf("File opening failed");
        return;
    }
    while(fgets(line,sizeof(line),fp) != NULL)
    {
        printf("%s",line);
    }   
    fclose(fp);
}