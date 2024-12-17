#include<stdio.h>
int main()
{
	int s=0,n,r;
	
	printf("Enter a number");
	scanf("%d",&n);
	
	while(n!=0)
	{
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	printf("The reverse is %d",s);
}
