//Function to check prime number

#include<stdio.h>

int check(int n)
{
int i,count=0;
for(i=1;i<=n;i++)
{
	if(n%i==0)
	{
		count++;
	}

}
		if(count==2)
	{
		return 1;
	}
	else{
		return 0;
	}	
}

int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	if(check(n))
	{
		printf("The number is prime: ");
	}
	else{
		printf("The number is not prime");
	}
}
