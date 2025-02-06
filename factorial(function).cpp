#include<stdio.h>

int factorial(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	{
		f*=i;
	}
	return f;
}
int main()
{
	int n,fact;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	fact=factorial(n);
	printf("The factorial of %d is %d",n,fact);
}
