

#include<stdio.h>
void sort(int *n,int *max,int *min)
{
	int i,great;
	for(i=0;i<10;i++)
	{
	if(*(n+i)>*max)
	{
		*max=*(n+i);
		}
	if(*(n+i)<*min)
	{
		*min=*(n+i);
		}
	}
}
int main()
{
	int a[10],i,max,min;
	
	for(i=0;i<10;i++)
	{
		printf("Enter a number: ");
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	sort(a,&max,&min);
	printf("Largest=%d\t smallest=%d",max,min);
	return 0;
	
}
