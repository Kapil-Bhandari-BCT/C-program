//C program to find factorial using recursion.

#include<stdio.h>
int factorial(int n)
{
int f;
if(n==0)
{
	return 1;
	}	
	
	else{
		return n*factorial(n-1);
	}
}

int main()
{
	int n,fact;
	printf("Enter a number: ");
	scanf("%d",&n);
	fact=factorial(n);
	printf("The factorial of %d is %d",n,fact);
}
