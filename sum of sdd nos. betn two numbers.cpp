#include<stdio.h>
int main()
{
	int i,a,b,sum=0;
	printf("Enter a range (a-b):");
	scanf("%d-%d",&a,&b);
	
	for(i=a+1;i<b;i++)
	{
		if(i%2!=0)
		{
			sum+=i;
		}
	}
	printf("The sum of odd numbers between %d and %d is %d",a,b,sum);
}
