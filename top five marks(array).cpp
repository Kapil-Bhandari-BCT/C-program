//Program to take marks of n students and display top five marks

#include<stdio.h>
int main()
{
	int marks[50];
	int i,j,n,temp;
	
	printf("Enter number of students: ");
	scanf("%d",&n);
	
	printf("Enter marks of %d students:\n",n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&marks[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(marks[i]<marks[j])
			{
				temp=marks[i];
				marks[i]=marks[j];
				marks[j]=temp;
			}
		}
	}
	
	printf("The top five marks is: \n");
	
	for(i=0;i<5;i++)
	{
		printf("%d\t",marks[i]);
	}
	return 0;
}
