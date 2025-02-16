//C program which display numbers from 1 to 10 but skips number 7
#include<stdio.h>
int main()
{
	int i;
	for(i=0;i<11;i++)
	{
			if(i==7)
		{
			continue;
		}
		printf("%d\t",i);
	
	}
	return 0;
}
