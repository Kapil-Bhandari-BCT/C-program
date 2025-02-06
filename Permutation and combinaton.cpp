#include<stdio.h>
int fact(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	{
		f*=i;
	}
	return f;
}

int main()
{
	int n,r,per,comb;
	printf("Enter value of n and r(n>r): ");
	scanf("%d %d",&n,&r);
	
	per=fact(n)/fact(n-r);
	comb=fact(n)/(fact(n-r)*fact(r));
	
	printf("%dP%d=%d\n",n,r,per);
	printf("%dC%d=%d\n",n,r,comb);
}
