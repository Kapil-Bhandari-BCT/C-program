//C program to print fibonacci series using recursion.

#include<stdio.h>
int fibo(int n){
	static int a=0,b=1,c;
	if(n>0)
	{
		c=a+b;
		printf("%d\t ",c);
		a=b;
		b=c;
		fibo(n-1);
	}
	
}
int main()
{
	int a=0,b=1,c,n;
	printf("Enter number of terms: ");
	scanf("%d",&n);
	printf("%d\t %d\t",a,b);
	fibo(n-2);
	return 0;
}
