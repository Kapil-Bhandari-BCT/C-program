/*C program to read array elements and print with addresses.*/
#include <stdio.h>
 
int main()
{
    int arr[10];        
    int *pa;            
    int  i;
     
    pa=arr;
     
    printf("Enter array elements:\n");
    for(i=0;i < 10; i++){
        printf("Enter element %02d: ",i+1);
        scanf("%d",pa+i);   
    }
     
    printf("\nEntered array elements are:");
    printf("\nAddress\t\tValue\n");
    for(i=0;i<10;i++){
        printf("%u\t\t%3d\n",(pa+i),*(pa+i));
    }
     
     
    return 0;
}
