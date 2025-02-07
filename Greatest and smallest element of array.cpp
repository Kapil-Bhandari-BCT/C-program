//C program to print greatest and smallest number in an array

#include<stdio.h>
int main()
{
	int n,i,great,small;
	printf("Enter number of elements in the array: ");
	scanf("%d",&n);
	
	int a[n];
	
	printf("Enter %d numbers: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	great=a[0];
	small=a[1];
	
	for(i=0;i<n;i++)
	{
		if(a[i]>great)
		{
			great=a[i];
		}
	}
	
	for(i=0;i<n;i++)
	{
		if(a[i]<small)
		{
			small=a[i];
		}
	}
	
	printf("Greatest=%d\t Smallest=%d",great,small);
	return 0;
}
