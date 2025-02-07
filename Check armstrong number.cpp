//C program to check Armstrong number

#include<stdio.h>
#include<math.h>
int main()
{
	int n,org,sum=0,r;
	printf("Enter a number: ");
	scanf("%d",&n);
	org=n;
	while(n!=0)
	{
	r=n%10;
	sum+=pow(r,3);
	n=n/10;	
	}
	
	if(sum==org)
	{
		printf("The number is armstrong number");
	}
	else{
		printf("The number is not armstrong");
	}
	
	
}
