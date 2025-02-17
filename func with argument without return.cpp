#include<stdio.h>
void factorial(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	{
		fact*=i;
	}
	printf("The factorial of %d is %d",n,fact);
}
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	factorial(n);
	return 0;
}
