#include<stdio.h>

int main()
{
	int a=0,b=1,i,n,c;
	printf("Enter number of terms");
	scanf("%d",&n);

	
	for(i=0;i<n;i++)
	{
		c=a+b;
		printf("%d\t",a);
		a=b;
		b=c;
		
		
	}
}
