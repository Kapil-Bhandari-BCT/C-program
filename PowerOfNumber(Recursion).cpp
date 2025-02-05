//C program to calculate power of a number using recursion.

#include<stdio.h>
int power(int b, int p)
{
if(p==0)
{
	return 1;
	}	
	else{
		return b*(power(b,p-1));
	}
}
int main()
{
	int b,p,result;
	printf("Enter base and power: ");
	scanf("%d %d",&b,&p);
	result=power(b,p);
	printf("The result is %d",result);
	return 0;
	
}
