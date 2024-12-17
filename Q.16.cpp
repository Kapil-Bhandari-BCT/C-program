#include<stdio.h>
int main()
{
	int n1,n2,i,count=0,sum=0;
	
	printf("Enter two numbers: ");
	scanf("%d %d",&n1,&n2);
	
	for(i=n1+1;i<n2;i++)
	{
		if(i%7==0)
		{
			count++;
			sum+=i;
		}
	}
	printf("The number of digits divisible by 7 between %d and %d is %d and their sum is %d",n1,n2,count,sum);
}
