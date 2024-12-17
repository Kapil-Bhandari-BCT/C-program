#include<stdio.h>
int main()
{
	int n,i,sum=0;
	
	printf("Enter a number: ");
	scanf("%d",&n);
	
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum+=i;
		}
	}
	
	if(sum==n)
	{
		printf("The number is perfect number.");
	}
	else{
		printf("The number is not perfect");
	}
}
