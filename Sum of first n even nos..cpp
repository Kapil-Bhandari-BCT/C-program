#include<stdio.h>
int main()
{
	int i,sum=0,n;
	printf("Enter number of terms: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=2*i;
	}
	printf("The sum of first %d even numbers is %d",n,sum);
}
