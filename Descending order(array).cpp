//C program to sort an one dimensional array in descending order

#include<stdio.h>
int main()
{
	int n,i,j,temp;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter %d numbers: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	printf("The numbers in ascending order are: ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
