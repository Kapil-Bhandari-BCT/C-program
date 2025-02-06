//C program to create, open and close a file.

#include<stdio.h>
int main()
{
 
    FILE *fp;   
    char fName[20];
 
    printf("Enter file name to create :");
    scanf("%s",fName);
 
    
    fp=fopen(fName,"w");
    

 
    printf("File created successfully.");
    fclose(fp);
    return 0;
}
