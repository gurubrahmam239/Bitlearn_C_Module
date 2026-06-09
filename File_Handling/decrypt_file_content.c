/*
Decrypt a scrambled (encrypted) file and make it readable again.
Input: File name: secret.txt (content: encrypted)
Output: File now contains: my password
*/
#include<stdio.h>
void Decrypt_File(char filename[]);
int main()
{
    char filename[100];
    printf("Enter file name:\n");
    scanf("%s",filename);
    Decrypt_File(filename);   
    return 0;
}
void Decrypt_File(char filename[])
{
    FILE *fp1;
    FILE *fp2;
    char ch;
    fp1 = fopen(filename,"r");
    if(fp1 == NULL)
    {
        printf("File opening failed");
        return;
    }
    fp2 = fopen("temp.txt","w");
    if(fp2 == NULL)
    {
        printf("Temporary file creation failed");
        fclose(fp1);   
        return;
    }
    while((ch = fgetc(fp1)) != EOF)
    {
       ch = ch - 3;    
        fputc(ch,fp2);
    }
    fclose(fp1);
    fclose(fp2);
    remove(filename);
    rename("temp.txt",filename);   
    printf("File decrypted successfully");
}