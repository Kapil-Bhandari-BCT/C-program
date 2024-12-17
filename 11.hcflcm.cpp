#include<stdio.h>

int main()
{
	int a,b,c,d,hcf,lcm,temp;
	
	printf("Enter two numbers: ");
	scanf("%d %d",&c,&d);
	a=c;
	b=d;
	
	while(b!=0)
	{
		temp=b;
		b=a%b;
		a=temp;
	}
	
	hcf=a;
	lcm=(c*d)/hcf;
	
	printf("hcf=%d\nlcm=%d",hcf,lcm);
}
