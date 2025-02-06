//C program to calculate the sum of array elements using pointers as an argument

#include<stdio.h>
int findsum(int *arr,int n)
{
	int i,s=0;
	for(i=0;i<n;i++)
	{
	s+=*(arr+i);	
	}
	return s;
}

int main()
{
	int n,i,sum;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter %d numbers: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sum=findsum(a,n);
	printf("The sum of all elements is: %d",sum);
	
}
