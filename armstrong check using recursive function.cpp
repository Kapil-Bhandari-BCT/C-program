#include<stdio.h>
#include<math.h>
int findsum(int n)
{
	if(n/10==0)
	{
		return n*n*n;
	}
	
	else
	{
		return pow(n%10,3)+findsum(n/10);
	}
}

int main()
{
	int n,a;
	int sum;
	printf("Enter a five digit number: ");
	scanf("%d",&n);
	
	sum=findsum(n);
	a=n;
	if(sum==a)
	{
		printf("Armstrong");
	}
	
	else
	{
		printf("Not armstrong");
	}
}
