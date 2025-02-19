#include<stdio.h>
int x=5;
void function()
{
	static int a=0;
	register int b=2;
	extern int x;
	int c=3;
	a++;
	b++;
	c++;
	printf("Static variable a: %d\n",a);
	printf("Register variable b: %d\n",b);
	printf("Extern variable x: %d\n",x);
	printf("Local variable c: %d\n",c);
	
}

int main()
{
	int i;
	for(i=0;i<3;i++)
	{
		function();
		x=x+2;
	}
	printf("Final Extern value x in main: %d",x);
	return 0;
}
