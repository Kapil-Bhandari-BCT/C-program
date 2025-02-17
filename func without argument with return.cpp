#include<stdio.h>
int add()
{
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	return a+b;
}
int main()
{
	int sum;
	sum=add();
	printf("The sum is %d",sum);
	return 0;
}
