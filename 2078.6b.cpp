#include<stdio.h>
int main()
{
	char str[10]="HELLO";
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c",str[j]);
		}
		printf("\n");
	}
	for(i=4;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			printf("%c",str[j]);
		}
		printf("\n");
	}
	return 0;
}
