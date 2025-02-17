#include<stdio.h>
int factorial(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	{
		fact*=i;
	}
	return fact;
}
int main()
{
	int n,fac;
	printf("Enter a number: ");
	scanf("%d",&n);
	fac=factorial(n);
	printf("The factorial of %d is %d",n,fac);
	return 0;
}
