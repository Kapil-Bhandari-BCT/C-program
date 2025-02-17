#include<stdio.h>
void sum()
{
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	printf("The sum of given numbers is %d",a+b);
}
int main()
{
	sum();
	return 0;
}
