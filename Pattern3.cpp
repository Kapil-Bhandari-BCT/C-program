/*
**********
****  ****
***    ***
**      **
*        *      */

#include<stdio.h>
int main()
{
	int i,j;
for(int i=5;i>=1;i--) //For loop for rows
{
 for(int k=1;k<=i;k++) //For loop for print star
 {
  printf("*");
 }
 for(int l=5;l>i;l--) //For loop for print space
 {
 printf("  ");
 }
 for(int m=1;m<=i;m++) //For loop for print star
 {
  printf("*");
 }
 printf("\n");
}
}
