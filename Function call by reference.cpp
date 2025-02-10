#include<stdio.h>

int rem(int *x,int *y)
{
	int rem;
	rem=*x%*y;
	return rem;
}
int main()
{
	int a,b;
	printf("Enter two numbers a and b: ");
	scanf("%d %d",&a,&b);
	
	printf("The remainder of a/b is %d",rem(&a,&b));
	return 0;
}
